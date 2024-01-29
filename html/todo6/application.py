from flask import Flask, render_template, redirect, request, session

app = Flask(__name__)
username = "bradfield"
password = "1234"

tasks = ["laundry", "wash dishes", "do homework"]
@app.route("/")
def index():
    return render_template("tasks.html", title="My Tasks", tasks=tasks)

@app.route("/add", methods=["POST", "GET"])
def add():
    if request.method == "GET":
        return render_template("add.html", title="Add a task")
    if request.method == "POST":
        task = request.form.get("task")
        tasks.append(task)
        return redirect("/")

@app.route("/login", methods=["GET", "POST"])
def login():
    if request.method == "POST":
        u = request.form.get("username")
        p = request.form.get("password")
        if u == username and p == password:
            session["username"] = username
            return redirect("/")
        else:
            return redirect("/login")
