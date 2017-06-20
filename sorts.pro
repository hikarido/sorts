
QT       += core
TARGET = sorts
TEMPLATE = app
CONFIG += c++11
SOURCES += \
    main.cpp \
    buble_sort/buble_sort.cpp \
    aux_func.cpp \
    selection_sort/selection_sort.cpp \
    insertation_sort/insertation_sort.cpp \
    shell_sort/shell_sort.cpp

HEADERS += \
    buble_sort/buble_sort.h \
    aux_func.h \
    selection_sort/selection_sort.h \
    insertation_sort/insertation_sort.h \
    shell_sort/shell_sort.h

