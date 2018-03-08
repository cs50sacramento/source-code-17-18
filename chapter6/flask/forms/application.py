from flask import Flask, render_template, request, redirect, url_for

app = Flask(__name__)

@app.route("/", methods=["GET", "POST"])
def form():
	if request.method == "POST":
		name = request.form.get("first_name")
		if request.form.get("block") == "C":
			block = "C"
		elif request.form.get("block") == "F":
			block = "F"
		else:
			block = "G"
		if block == "C" or block == "F":
			message = "You are taking AP CS Principles"
			return redirect(url_for('enroll'))
		else:
			message = "You are taking AP CS A (Java)"
			return render_template("submission.html", form_name=name, form_message=message)
	else:
		return render_template("index.html")

@app.route("/result", methods=["GET", "POST"])
def enroll():
	if request.method == "POST":
		if request.form.get("enrollment") == "yes":
			choice = "See you next year!"
		elif request.form.get("enrollment") == "no":
			choice = ":("
		elif request.form.get("enrollment") == "grad":
			choice = "Have fun in college!"
		else:
			choice = "You didn't make a selection!"
		return render_template("enrolled.html", course_choice=choice)
	else:
		return render_template("enrollment.html")
	
if __name__ == "__main__":
	app.run(debug=True)