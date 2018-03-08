from flask import Flask, render_template

app = Flask(__name__)

@app.route("/")
def hello():
	return "hello, world"

@app.route("/hello")
def cs50():
	return "<h2>this is cs50!</h2>"

@app.route("/name/<name>")
def greet_user(name):
	return "Hello, " + name + "! You are my favorite student!"

@app.route("/parks")
def parks_and_recs():
	return render_template("parks.html")

if __name__ == "__main__":
	app.run(debug=True)