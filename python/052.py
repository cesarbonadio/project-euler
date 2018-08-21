def compare_lists(list1, list2):
    if len(list1) != len(list2): return False
    for item in list1:	
        if item not in list2:
          return False
    for item in list2:
    	if item not in list1:
    		return False
    return True


i = 0
while True:
	i += 1
	if compare_lists([int(x) for x in str(i)],[int(x) for x in str(i*2)]) and \
		compare_lists([int(x) for x in str(i)],[int(x) for x in str(i*3)]) and \
		compare_lists([int(x) for x in str(i)],[int(x) for x in str(i*4)]) and \
		compare_lists([int(x) for x in str(i)],[int(x) for x in str(i*5)]) and \
		compare_lists([int(x) for x in str(i)],[int(x) for x in str(i*6)]):
		print (i)
		break 