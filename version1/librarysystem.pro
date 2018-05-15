TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    book.cpp \
    ebook.cpp \
    paper.cpp \
    user.cpp

HEADERS += \
    book.h \
    ebook.h \
    paper.h \
    user.h
