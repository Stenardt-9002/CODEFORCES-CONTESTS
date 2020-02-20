import numpy as np

# li

def key_func_for_library(key):
    global libraries
    library = libraries[key]
    book_mean_score = np.array(library['books']).mean()
    score = book_mean_score * len(library['books']) / (library['signup'] * (library['books_per_day']))
    return (score)


def key_func_for_books(book):
    return(books[book])

def main():

    print(1)


if(__name__ == '__main__'):
    main()

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
    lib_counter = lib_counter+1
