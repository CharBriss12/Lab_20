#ifndef LAB_20_SET_UNORDERED_H
#define LAB_20_SET_UNORDERED_H

# include <stdint.h>
# include <assert.h>
# include <memory.h>
# include <stdio.h>
# include <stdbool.h>


typedef struct unordered_array_set {
    int *data; // элементы множества
    size_t size; // количество элементов в множестве
    size_t capacity; // максимальное количество элементов в множестве
} unordered_array_set;

// возвращает пустое множество для capacity элементов
unordered_array_set unordered_array_set_create(size_t capacity);

// возвращает множество, состоящее из элементов массива a размера size.
unordered_array_set unordered_array_set_create_from_array(const int *a, size_t size);

// возвращает позицию элемента в множестве,
// если значение value имеется в множестве set, иначе - n
size_t unordered_array_set_in(unordered_array_set set, int value);


//проверяет подмножество
bool unordered_array_set_isSubset(unordered_array_set subset, unordered_array_set set);



// возвращает значение ’истина’, если элементы множеств set1 и set2 равны
// иначе - ’ложь’
bool unordered_array_set_isEqual(unordered_array_set set1, unordered_array_set set2);

// возбуждает исключение, если в множество по адресу set
// нельзя вставить элемент
void unordered_array_set_isAbleToAppend(unordered_array_set *set);

// добавляет элемент value в множество set
void unordered_array_set_insert(unordered_array_set *set, int value);

// удаляет элемент value из множества set
void unordered_array_set_deleteElement(unordered_array_set *set, int value);

// возвращает объединение множеств set1 и set2.
unordered_array_set unordered_array_set_union(unordered_array_set set1, unordered_array_set set2);

// возвращает пересечение множеств set1 и set2
unordered_array_set unordered_array_set_intersection(unordered_array_set set1, unordered_array_set set2);

// возвращает разность множеств set1 и set2
unordered_array_set unordered_array_set_difference(unordered_array_set set1, unordered_array_set set2);


// возвращает дополнение до универсума множества set25
unordered_array_set unordered_array_set_complement(unordered_array_set set, unordered_array_set universumSet);

// возвращает симметрическую разность множеств set1 и set226
unordered_array_set unordered_array_set_sym_difference(unordered_array_set set1, unordered_array_set set2);

// вывод множества set
void unordered_array_set_print(unordered_array_set set);

// освобождает память, занимаемую множеством set
void unordered_array_set_delete(unordered_array_set set);

//изменение памяти по необходимости
void unordered_set_shrink_to_fit(unordered_array_set *set);

//проверка возможности добавления элемента
void unordered_array_set_isAbleToAppend(unordered_array_set *set);


#endif //LAB_20_SET_UNORDERED_H
