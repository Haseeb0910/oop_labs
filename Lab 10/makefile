main1.exe : SRMS.obj main1.obj
	link SRMS.obj main1.obj

main1.obj : main1.cpp
	cl /c main1.cpp

SRMS.obj : SRMS.cpp
	cl /c SRMS.cpp

main1.cpp : SRMS.h

SRMS.cpp : SRMS.h

clear : 
	del *.obj
	del *.exe