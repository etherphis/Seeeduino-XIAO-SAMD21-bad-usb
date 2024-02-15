#include "DemoScriptClass.h"
#include <Arduino.h>
#include <Keyboard.h>

DemoScriptClass::DemoScriptClass()
{
}

void DemoScriptClass::begin()
{
    Keyboard.begin();
    delay(1000);
}

void DemoScriptClass::run()
{
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.releaseAll();
    delay(100);
    convertAndType("cmd");
    delay(500);
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(1000);
    convertAndType("echo 'Hello, I am inside your Computer! Muhahaha'");
    delay(100);
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(1000);
}

// Convert uppercase and lowercase letters to the corresponding ASCII code and then write it
void DemoScriptClass::convertAndType(const char *text)
{
    for (size_t i = 0; i < strlen(text); i++)
    {
        char currentChar = text[i];

        if (currentChar >= 'A' && currentChar <= 'Z')
        {
            currentChar = currentChar - 'A' + 0x41;
        }

        else if (currentChar >= 'a' && currentChar <= 'z')
        {
            currentChar = currentChar - 'a' + 0x61;
        }

        Keyboard.write(currentChar);
    }
}
