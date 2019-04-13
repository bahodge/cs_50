from flask import Flask, render_template, request
import csv
app = Flask(__name__)


@app.route("/")
def index():
    return render_template("index.html")


@app.route("/registrants")
def registrants():
    with open("registered.csv", "r") as file:
        reader = csv.reader(file)
        students = list(reader)
    return render_template("registrants.html", students=students)


@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    dorm = request.form.get("dorm")
    if not name or not dorm:
        return render_template("failure.html")

    with open("registered.csv", "a") as file:
        writer = csv.writer(file)
        writer.writerow((name, dorm))
        file.close()

    return render_template("success.html")
