#!/usr/bin/python
import BaseHTTPServer, SimpleHTTPServer
import ssl
from os import curdir, sep
import cgi

class MyHandler(BaseHTTPServer.BaseHTTPRequestHandler):
	def do_HEAD(s):
		s.send_response(200)
		s.send_header("Content-type", "text/html")
		s.end_headers()
	def do_GET(s):
		# Respond to a GET request.
		if s.path == "/":
			s.path = "/index.html"

		try:
			sendReply = False
			if s.path.endswith(".html") or s.path.endswith(".txt"):
				mimetype='text/html'
				sendReply = True
			if s.path.endswith(".jpg"):
				mimetype='image/jpg'
				sendReply = True
			if s.path.endswith(".gif"):
				mimetype='image/gif'
				sendReply = True
			if s.path.endswith(".js"):
				mimetype='application/javascript'
				sendReply = True
			if s.path.endswith(".css"):
				mimetype='text/css'
				sendReply = True
			if s.path.endswith(".png"):
				mimetype='image/png'
				sendReply = True


			if sendReply == True:
				#Open the static file requested and send it
				f = open(curdir + sep + s.path)
				s.send_response(200)
				s.send_header('Content-type',mimetype)
				s.end_headers()
				s.wfile.write(f.read())
				f.close()
			return

		except IOError:
			s.send_error(404,'File Not Found: %s' % s.path)

	def do_POST(s):
		global blink
		if s.path == "/blink":
			form = cgi.FieldStorage(
				fp = s.rfile,
				headers = s.headers,
				environ = { 'REQUEST_METHOD' : 'POST',
		                 'CONTENT_TYPE' : s.headers['Content-Type'],
			})

			# Open the file that Basys reads from
			# To write the command specified in the browser
			f = open('basys.txt', 'w')
			message = ""
			length = 0

			if (form["cmd"].value == "Blink 1 LED"):
				message = " BEGIN: BLINK1 "
			elif (form["cmd"].value == "Blink 10 LEDS"):
				message = " BEGIN: BLINK10 "
			elif (form["cmd"].value == "Alternate LEDS"):
				message = " BEGIN: Alternate "


			length = len(message)
			f.write(message)
			f.truncate(length)
			f.close()

			#Redirect the browser on the main page
			s.send_response(302)
			s.send_header('Location','/')
			s.end_headers()
			print s.headers
			print s.path
			print s.command



			return



httpd = BaseHTTPServer.HTTPServer(('192.168.1.104', 4443), MyHandler)
httpd.socket = ssl.wrap_socket (httpd.socket, certfile = './server.pem', server_side = True)
httpd.serve_forever()
