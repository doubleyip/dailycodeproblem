def cons(a, b):
	def pair(f):
		return f(a, b)
	return pair
	
def car(c):
	def first(a,b):
		return a
	return c(first)
	
def cdr(c):
	def last(a,b):
		return b
	return c(last)
	
print(car(cons(3,4)))
print(cdr(cons(3,4)))