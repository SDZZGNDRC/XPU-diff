import sys
import matplotlib.pyplot as plt
filepath = sys.argv[1]
with open(filepath, 'r', encoding='utf-8') as fin:
	lines = fin.readlines()
lines = [ i.strip('\n') for i in lines[1:] ]
rgb = []
l = iter(lines)
for i in range(640):
	a = []
	for j in range(480):
		t = next(l)
		a.append([int(t[0:2], base=16), int(t[2:4], base=16), int(t[4:6], base=16)])
	rgb.append(a)
plt.imshow(rgb)
plt.show()
