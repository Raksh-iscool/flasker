'''from flask import Flask, render_template


app=Flask(__name__)

@app.route('/')

def index():
    return render_template("index.html")
#localhost:5000/user/john
@app.route('/user/<name>')

def user(name):
    return "<h1>hoola {}</h1>".format(name)
'''
'''if __name__=='__main__':
    app.run(debug=True)''''''