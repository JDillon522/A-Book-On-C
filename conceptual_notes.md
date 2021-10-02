## Reading and file and streaming it to stdin to feed `scanf()`

    freopen takes the file, does the operation, in this case "r" for "read"
    it then redirects the output of that operation to the particular stream
    so in this case, the data of stdin is replaced by the content of the file,
    and can then be read by scanf().

    if it was stdout then the printf() functions would actually write to the file
    https://www.tutorialspoint.com/c_standard_library/c_function_freopen.htm

```
FILE *file;
file = freopen("sumdata", "r", stdin);

// ... do things with the data

fclose(file)
```
