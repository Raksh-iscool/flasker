'''from flask import Flask, render_template


app=Flask(__name__)

@app.route('/')

def index():
    return "<h1>cool world</h1>" '''
from flask import Flask, render_template


app=Flask(__name__)

@app.route('/')

def index():
    first_name="raksh"
    stuff="this is <strong>Kool</strong> text"
    favo=["pizza","burger","vadapav"]
    return render_template("indexF.html",
                           first_name=first_name,
                           stuff=stuff,
                           favo=favo)
#localhost:5000/user/john
@app.route('/user/<name>')
    
def user(name):
    return render_template("userF.html",user_name=name)
@app.errorhandler(404)
def page_not_found(e):
    return render_template("404.html"), 404

def page_not_found(e):
    return render_template("500.html"), 500

if __name__=='__main__':
    app.run(bebug=True)