
import numpy as np


import sort_fuction
import sys
inFile = sys.argv[1]
outFile = sys.argv[2]
t1emp =  0
with open(inFile, 'r') as i:
    lines = i.readlines()
    # lines[0] = lines[0].rstrip()
    # t1emp+=1
main_list = []
for i in lines:
    main_list.append(i.strip())

# print(main_list)
Books, Lib ,DAys  = map(int,main_list[0].split())
# DAys = int(input())
# print(Books)

list_books_score = list(map(int,main_list[1].split()))
# print(list_books_score)

# for i in range((Books)):
    # dict_book[i] = list_books_score[i]

dict_book = {}#global stuff
#dictbokk val
dict_it = {
"occur":0,
"score":0,
}




Libray = {
"books" : [],
"count-books":0,
"books_per_day":0,
"signup":0,
"books-send":0,
  "order" : [],


}
# books_score = np.set()
# books_score = []

libray_main_dict = {}
# libray_main_dict[i] = library
inde_x = 0
for i in range(0,(2*Lib),2):
    Libray = {
    "books" : [],
    "count-books":0,
    "books_per_day":0,
    "signup":0,
    "books-send":0,
    "order" : [],

    }
    temp1 = list(map(int,main_list[i+2].split()))

    Libray["count-books"] = temp1[0]
    Libray["books_per_day"] = temp1[2]
    Libray["signup"] = temp1[1]
    temp1 = list(map(int,main_list[i+3].split()))
    # for i in temp1:
    #     if i not in books_score:
    #         books_score
    Libray["books"] = temp1

    libray_main_dict[inde_x] = Libray
    inde_x+=1
    # print(libray_main_dict)
    # print(Libray)
    # print(inde_x)
# print(libray_main_dict)


# def key_func_for_library(key):
#     global libray_main_dict
#     print(key)
#     print(libray_main_dict)
#     library = []
#     for i in range(len(key)):
#         library.append(libray_main_dict[i])
#     # library = libray_main_dict[key]
#     for i in
#     book_mean_score = np.array(library['books']).mean()
#     score = book_mean_score * len(library['books']) / (library['signup'] * (library['books_per_day']))
#     return (score)


# def key_func_for_books(book):
#     global
#     return(books[book])books_score_zeros = [0]*len()



books_score_zeros = [0]*len(list_books_score)
# print(books_score)
libray_keys = list(libray_main_dict.keys())
# def key_func_for_library(key):
#     global libray_main_dict
#     print(key)
#     print(libray_main_dict)
#     library = []
#     for i in range(len(key)):
#         library.append(libray_main_dict[i])
#     # library = libray_main_dict[key]
#     for i in
#     book_mean_score = np.array(library['books']).mean()
#     score = book_mean_score * len(library['books']) / (library['signup'] * (library['books_per_day']))
#     return (score)
# y_main_dict.keys())
# print()
scores = {}

for key in libray_keys:

    book_mean_score = np.array(libray_main_dict[key]['books']).mean()
    score = book_mean_score * len(libray_main_dict[key]['books']) / (libray_main_dict[key]['signup'] * (libray_main_dict[key]['books_per_day']))
    scores[key] = score
# print(scores)




# libray_key = sorted(libray_keys, key_func_for_library(libray_keys))
# sort(scores,lambda x:x[])
new_score =  {k: v for k, v in sorted(scores.items(), key=lambda item: item[1])}
# print(new_score)
# print(libray_main_dict)

lib_counter = 0
book_counter = 0
td = DAys
for i in new_score.keys():
    if td<=0:
        break
    td = td - libray_main_dict[i]["signup"]
    bc = td*libray_main_dict[i]["count-books"]*libray_main_dict[i]["books_per_day"]
    for j in libray_main_dict[i]["books"]:
        if(bc == 0):
            break
        if(books_score_zeros[j] == 0):
            books_score_zeros[j] = 1
            book_counter += 1
            bc = bc-1
            libray_main_dict[i]['order'].append(j)
            libray_main_dict[i]["books-send"] += 1
    lib_counter = lib_counter+1

print(lib_counter)

str1 = ""
str1 +=(str)(lib_counter)+'\n'
# print()
for i in list(new_score.keys()):
    print(i,end = " ")
    str1+=(str)(i)+" "
# print()
    str1+=(str)(libray_main_dict[i]['books-send'])
    str1+='\n'
    for ij in libray_main_dict[i]['order']:
        str1 = str(ij)+" "
    # str1+='\n'+str(libray_main_dict[i]['order'])
print(book_counter)
str1+='\n'+(str)(book_counter)+'\n'
for i in range(len(books_score_zeros)):
    if books_score_zeros[i] == 1:
        print(i,end=" ")
        str1+=(str)(i)+" "

print()
with open(outFile, 'w') as o:
    for line in str1:
        o.write(line)
