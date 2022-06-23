#ifndef INVALIDSIZEEXCEPTION_H
#define INVALIDSIZEEXCEPTION_H
#include<string>

class InvalidSizeException{
    public:
        std::string err = "InvalidSizeException";
        

};

#endif
#ifndef QUEUEFULLEXCEPTION_H 
#define QUEUEFULLEXCEPTION_H

class QueueFullException{
    public:
        std::string err = "QueueFullException";

};

#endif
#ifndef QUEUEEMPTYEXCEPTION_H 
#define QUEUEEMPTYEXCEPTION_H

class QueueEmptyException{
    public:
        std::string err = "QueueEmptyException";

};

#endif
#ifndef ITEMNOTFOUNDEXCEPTION_H 
#define ITEMNOTFOUNDEXCEPTION_H

class ItemNotFoundException{
    public:
        std::string err = "ItemNotFoundException";

};

#endif

