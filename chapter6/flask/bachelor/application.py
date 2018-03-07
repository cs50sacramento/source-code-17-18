from flask import Flask, render_template, request, url_for, redirect

app = Flask(__name__)

@app.route("/", methods=["GET", "POST"])
def form():
	if request.method == "POST":
		name = request.form.get("first_name")
		choice = request.form.get("choice")
		if choice == "yes":
			return redirect(url_for('yes'))
		else:
			return "You are wrong"
	else:
		return render_template("index.html")

@app.route("/arie", methods=["GET", "POST"])
def yes():
	if request.method == "POST":
		user_reason = request.form.get("reason")
		return render_template("response.html", reasoning=user_reason)
	else:
		return render_template("arie.html")
		
if __name__ == "__main__":
	app.run(debug=True)