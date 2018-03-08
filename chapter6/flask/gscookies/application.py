from flask import Flask, render_template, request, redirect, url_for

app = Flask(__name__)

@app.route("/", methods=["GET", "POST"])
def form():
	if request.method == "POST":
		name = request.form.get("first_name")
		cookie = request.form.get("cookie")
		if cookie == "thx":
			cookie = "Thanks-A-Lot"
		elif cookie == "mints":
			cookie = "Thin Mints"
		else:
			cookie = "an inferior cookie"
		return render_template("cookies.html", user_name=name, cookie=cookie)
	else:
		return render_template("index.html")

@app.route("/cookie", methods=["GET", "POST"])
def cookie():
	if request.method == "POST":
		user_method = request.form.get("method")
		message = ""
		if user_method == "fork":
			message = "WHY?!?"
		elif user_method == "one":
			message = "IMPRESSIVE"
		elif user_method == "plain":
			message = "Classic"
		else:
			message = "Interesting..."
		return render_template("results.html", message=message)

if __name__ == "__main__":
	app.run(debug=True)