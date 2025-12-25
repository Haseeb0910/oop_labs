main2.exe : BAS.obj main2.obj
	link BAS.obj main2.obj

main2.obj : main2.cpp
	cl /c main2.cpp
	
 BAS.obj : BAS.cpp
	cl /c BAS.cpp

main2.cpp : BAS.h
 BAS.cpp : BAS.h

clear : 
	del *.obj
	del *.exe