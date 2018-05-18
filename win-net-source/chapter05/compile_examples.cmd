rem for first try with vectors
cl /W4 /EHsc ext_main.cpp median.cpp grade.cpp fails_vec1.cpp Student_info.cpp /link /out:First_Try_Vecs.exe


rem for second try
cl /W4 /EHsc ext_main.cpp median.cpp grade.cpp fails_vec2.cpp Student_info.cpp /link /out:Second_Try_Vecs.exe

rem for third try with iterators
cl /W4 /EHsc ext_main.cpp median.cpp grade.cpp fails_iters.cpp Student_info.cpp /link /out:Third_Try_Iters.exe

rem for fourth try with lists instead of vectors
cl /W4 /EHsc list_main.cpp median.cpp grade.cpp fails_list.cpp Student_info.cpp /link /out:Fourth_Try_Lists.exe

rem for the split program
cl /W4 /EHsc split.cpp split_main.cpp /link /out:string_split.exe

rem for the pictures 
cl /W4 /EHsc pics.cpp pics_main.cpp /link /out:pictures.exe
