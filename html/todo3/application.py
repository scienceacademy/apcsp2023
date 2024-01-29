from flask import Flask, render_template, redirect, request, session
username = "bradfield"
password = "1234"

app = Flask(__name__)

tasks = ["wash dishes", "walk the dog", "homework"]

@app.route("/")
def index():
    return render_template("tasks.html", tasks=tasks,
                           title="Tasks")

@app.route("/add", methods=["POST", "GET"])
def add():
    if request.method == "GET":
        return render_template("add.html", title="Add a task")
    if request.method == "POST":
        task = request.form.get("task")
        tasks.append(task)
        return redirect("/")

@app.route("/login")
def login():
    if request.method == "POST":
        user = request.form.get("username")
        passwd = request.form.get("password")
        if user == username and passwd == password:
            session["username"] = username
