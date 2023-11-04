## 1. Install Emscripten SDK
Read the [Manual](https://emscripten.org/docs/getting_started/downloads.html) for the installation guidelines.

## 2. Clone the repository
```
git clone https://github.com/itspacedev/c_wasm.git
```

## 3. Install NodeJS modules
```
npm install
```

## 4. Compile this example
```
emcc hello_world.c -o index.html \
    -sEXPORTED_FUNCTIONS=_intSqrt,_addTwoNumbers,_returnString,_getStringLength \
    -sEXPORTED_RUNTIME_METHODS=ccall,cwrap,stringToNewUTF8,UTF8ToString
```

## 5. Run the http-server (nodejs)
```
http-server .
```

## 6. Open the link provided by the http-server
```
Open in Chrome: http://127.0.0.1:8080 (may be different for you)
```

## 7. Open the console in Chrome and check the debug information

You should see the following output:

```
#1. Get integer square root
intSqrt(33) =  5 

#2. Add two numbers
addTwoNumbers(4, 91) =  95 

#3. Return a string from C
returnString() =  This is the Wallet (type string) 

#4. Get string length
getStringLength("This is my long string") =  22
```