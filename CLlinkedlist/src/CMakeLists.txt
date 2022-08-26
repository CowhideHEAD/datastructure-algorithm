CMAKE_MINIMUM_REQUIRED ( VERSION 2.8 )
project(Cyrcle_linkedlist LANGUAGES C ) #project( 프로젝트 이름  사용언어는 C  )

message ( " lets cmake!")

set (CMAKE_VERBOSE_MAKEFILE true)



ADD_EXECUTABLE(CLlinkedlist main.c CLlinkedlist.c) #(1.출력할 out파일 이름, 확장자명은 쓰지않아 2. 참조할 소스코드 이름 3. 참조할 소스코드이름 .... )



ADD_COMPILE_OPTIONS( -g -Wall)

ADD_COMPILE_OPTIONS( -c)
ADD_COMPILE_OPTIONS( -o)



