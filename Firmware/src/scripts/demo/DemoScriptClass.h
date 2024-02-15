#ifndef DEMOSCRIPT_CLASS_H
#define DEMOSCRIPT_CLASS_H

class DemoScriptClass
{
public:
    DemoScriptClass();
    void begin();
    void run();

private:
    void setKeyboardLayout(const char *languageCode);
    void convertAndType(const char *text);
};

#endif
