'''from flask import Flask, render_template
#create a Flask instance
app=Flask(__name__)

#create a route decorator
@app.route('/')

def index():
    return render_template("index.html")

#localhost:5000/user/john
@app.route('/user/<name>')

def user(name):
    return"<h1> name {} is cool</h1>".format(name)
'''