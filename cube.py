# py file for face and cube struct
# Author: James Dolan, 2016
 
#TODO python strings are immutable, need to find alt method to change state

blue = 4
red = 13
yellow = 22
orange = 31
green = 40
white = 49
blueOffset = 0
redOffset  = 9
yellowOffset = 18
orangeOffset = 27
greenOffset = 36
whiteOffset = 45
		

MASTER_CUBE = list("bbbbbbbbbrrrrrrrrryyyyyyyyyooooooooogggggggggwwwwwwwww")
cube = list("bbbbbbbbbrrrrrrrrryyyyyyyyyooooooooogggggggggwwwwwwwww")
blueEdge = [9, 10, 11, 18, 19, 20, 27, 28, 29, 53, 52, 51]
redEdge = [6, 7, 8, 18, 21, 24, 36, 39, 42, 45, 48, 51]
yellowEdge = [6, 7, 8, 17, 14, 11, 38, 37, 36, 27, 30, 33]
orangeEdge = [2, 5, 8, 20, 23, 26, 38, 41, 44, 47, 50, 53]
greenEdge = [15, 16, 17, 47, 46, 45, 33, 34, 35, 24, 25, 26]
whiteEdge = [0, 1, 2, 15, 12, 9, 44, 43, 42, 29, 32, 35]
bEdge = [1, 7, 3, 5]
bCorn = [0, 6, 2, 8]


def rotate(face, direction):

#direction 0 for clockwise and 1 for cc
#faces 5:blue, 14:red, 23:yellow, 32:orange, 41:green, 50:white

	tmpSide = [0]*9
	tmpEdge = [0]*12
	k = 0
	i = 0

	if face == blue:
		#side
		tmpSide = cube[:9]
		
		#edges
		for i in range(12):
			tmpEdge[i] = cube[blueEdge[i]]
		
	
		#face rotation

		#to do this where the cube index is greater than 9,
		#use the same modulo then add an offset that unique to each side

		#blue edge rotation
		k = 3
		for i in range(4):
			if(direction):
				cube[k] = tmpSide[bEdge[i]]
			
			elif(not direction):
				cube[bEdge[i]] = tmpSide[k]
			
			k = (k+2)%8
		
		#blue corner rotation
		k = 6
		for i in range(4):
			if(direction):
				cube[k] = tmpSide[bCorn[i]]
			
			elif(not direction):
				cube[bCorn[i]] = tmpSide[k]
			
			k=(k+2)%10
			#shouldn't be true but jic
			if(k==4):
				k+=2
			
		

		#edges rotation
		#TODO this does cc rotation on c rotatation
		k = 9
		for i in range(12):
			if(direction):
				cube[blueEdge[i]] = tmpEdge[k]
			k = (k+1)%12
		
		

	elif face == red:
		#make a list of what the edges are for each side so we can do this in a loop
		#side
		tmpSide = cube[9:18]
		
		for i in range(12):
			tmpEdge[i] = cube[redEdge[i]]
		
	
		#face rotation

		#to do this where the cube index is greater than 9,
		#use the same modulo then add an offset that unique to each side

		#red edge rotation
		k = 3
		for i in range(4):
			if(direction):
				cube[k+redOffset] = tmpSide[bEdge[i]+redOffset]
			
			elif(not direction):
				cube[bEdge[i]+redOffset] = tmpSide[k+redOffset]
			
			k = (k+2)%8
		
		#red corner rotation
		k = 6
		for i in range(4):
			if(direction):
				cube[k+redOffset] = tmpSide[bCorn[i]+redOffset]
			
			elif(not direction):
				cube[bCorn[i]+redOffset] = tmpSide[k+redOffset]
			
			k=(k+2)%10
			#shouldn't be true but jic
			if(k==4):
				k+=2
			
		

		#edges rotation
		k = 9
		for i in range(12):
			cube[redEdge[i]] = tmpEdge[k]
			k = (k+1)%12
		
		

	elif face == yellow:
		#make a list of what the edges are for each side so we can do this in a loop
		#side
		tmpSide = cube[18:27]
		
		
		for i in range(12):
			tmpEdge[i] = cube[yellowEdge[i]]
		
	
		#face rotation

		#to do this where the cube index is greater than 9,
		#use the same modulo then add an offset that unique to each side

		#red edge rotation
		k = 3
		for i in range(4):
			if(direction):
				cube[k+yellowOffset] = tmpSide[bEdge[i]+yellowOffset]
			
			elif(not direction):
				cube[bEdge[i]+yellowOffset] = tmpSide[k+yellowOffset]
			
			k = (k+2)%8
		
		#blue corner rotation
		k = 6
		for i in range(4):
			if(direction):
				cube[k+yellowOffset] = tmpSide[bCorn[i]+yellowOffset]
			
			elif(not direction):
				cube[bCorn[i]+yellowOffset] = tmpSide[k+yellowOffset]
			
			k=(k+2)%10
			#shouldn't be true but jic
			if(k==4):
				k+=2
			
		

		#edges rotation
		
		k = 9
		for i in range(12):
			cube[yellowEdge[i]] = tmpEdge[k]
			k = (k+1)%12
		

	elif face == orange:
		#make a list of what the edges are for each side so we can do this in a loop
		#side
		tmpSide = cube[27:36]
		
		for i in range(12):
			tmpEdge[i] = cube[orangeEdge[i]]
		
	
		#face rotation

		#to do this where the cube index is greater than 9,
		#use the same modulo then add an offset that unique to each side

		#red edge rotation
		k = 3
		for i in range(4):
			if(direction):
				cube[k+orangeOffset] = tmpSide[bEdge[i]+orangeOffset]
			
			elif(not direction):
				cube[bEdge[i]+orangeOffset] = tmpSide[k+orangeOffset]
			
			k = (k+2)%8
		
		#blue corner rotation
		k = 6
		for i in range(4):
			if(direction):
				cube[k+orangeOffset] = tmpSide[bCorn[i]+orangeOffset]
			
			elif(not direction):
				cube[bCorn[i]+orangeOffset] = tmpSide[k+orangeOffset]
			
			k=(k+2)%10
			#shouldn't be true but jic
			if(k==4):
				k+=2
			
		

		#edges rotation
		k = 9
		for i in range(12):
			cube[orangeEdge[i]] = tmpEdge[k]
			k = (k+1)%12
		

	elif face == green:
		#make a list of what the edges are for each side so we can do this in a loop
		#side
		tmpSide = cube[36:44]
		
		for i in range(12):
			tmpEdge[i] = cube[greenEdge[i]]
		
	
		#face rotation

		#to do this where the cube index is greater than 9,
		#use the same modulo then add an offset that unique to each side

		#red edge rotation
		k = 3
		for i in range(4):
			if(direction):
				cube[k+greenOffset] = tmpSide[bEdge[i]+greenOffset]
			
			elif(not direction):
				cube[bEdge[i]+greenOffset] = tmpSide[k+greenOffset]
			
			k = (k+2)%8
		
		#blue corner rotation
		k = 6
		for i in range(4):
			if(direction):
				cube[k+greenOffset] = tmpSide[bCorn[i]+greenOffset]
			
			elif(not direction):
				cube[bCorn[i]+greenOffset] = tmpSide[k+greenOffset]
			
			k=(k+2)%10
			#shouldn't be true but jic
			if(k==4):
				k+=2
			
		

		#edges rotation
		k = 9
		for i in range(12):
			cube[greenEdge[i]] = tmpEdge[k]
			k = (k+1)%12
		

	elif face == white:
		#make a list of what the edges are for each side so we can do this in a loop
		#side
		tmpSide = cube[45:54]
		
		for i in range(12):
			tmpEdge[i] = cube[whiteEdge[i]]
		
	
		#face rotation

		#to do this where the cube index is greater than 9,
		#use the same modulo then add an offset that unique to each side

		#red edge rotation
		k = 3
		for i in range(4):
			if(direction):
				cube[k+whiteOffset] = tmpSide[bEdge[i]+whiteOffset]
			
			elif(not direction):
				cube[bEdge[i]+whiteOffset] = tmpSide[k+whiteOffset]
			
			k = (k+2)%8
		
		#blue corner rotation
		k = 6
		for i in range(4):
			if(direction):
				cube[k+whiteOffset] = tmpSide[bCorn[i]+whiteOffset]
			
			elif(not direction):
				cube[bCorn[i]+whiteOffset] = tmpSide[k+whiteOffset]
			
			k=(k+2)%10
			#shouldn't be true but jic
			if(k==4):
				k+=2
			
		

		#edges rotation
	
		k = 9
		for i in range(12):
			cube[whiteEdge[i]] = tmpEdge[k]
			k = (k+1)%12
		

	




def main():
	print("Testing rotation:\n\n")
	print("Testing Blue\n")
	rotate(blue, 1)
	print(cube)
	rotate(blue, 0)
	print(cube)
	if(cube == MASTER_CUBE):
		print("Blue passed\n\n")
	
	else:
		print("***Blue failed\n\n")
	
	print("Testing Red")
	rotate(red, 1)
	rotate(red, 0)
	if(cube == MASTER_CUBE):
		print("Red passed\n\n")
	
	else:
		print("***Red failed\n\n")
	
	print("Testing Yellow\n")
	rotate(yellow, 1)
	rotate(yellow, 0)
	if(cube == MASTER_CUBE):
		print("Yellow passed\n\n")
	
	else:
		print("***Yellow failed\n\n")
	
	print("Testing Orange\n")
	rotate(orange, 1)
	rotate(orange, 0)
	if(cube == MASTER_CUBE):
		print("Orange passed\n\n")
	
	else:
		print("***Oranged failed\n\n")
	
	print("Testing Green\n")
	rotate(green, 1)
	rotate(green, 0)
	if(cube == MASTER_CUBE):
		print("Green passed\n\n")
	
	else:
		print("***Green failed\n\n")
	
	print("Testing White\n")
	rotate(white, 1)
	rotate(white, 0)
	if(cube == MASTER_CUBE):
		print("White passed\n\n")
	
	return(0)

main()
