@interface NSPlaceholderString : NSString

- (id)retain;
- (id)init;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)initWithData:(id)a0 encoding:(unsigned long long)a1;
- (id)initWithCString:(const char *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 deallocator:(id /* block */)a3;
- (id)initWithCStringNoCopy:(char *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)autorelease;
- (BOOL)_tryRetain;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2 freeWhenDone:(BOOL)a3;
- (id)initWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 arguments:(char *)a3 error:(id *)a4;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 deallocator:(id /* block */)a2;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithCString:(const char *)a0 encoding:(unsigned long long)a1;
- (BOOL)_isDeallocating;
- (id)initWithCString:(const char *)a0;
- (id)initWithFormat:(id)a0 locale:(id)a1 arguments:(char *)a2;
- (id)initWithString:(id)a0;
- (id)_initWithValidatedFormat:(id)a0 validFormatSpecifiers:(id)a1 locale:(id)a2 options:(id)a3 error:(id *)a4 arguments:(char *)a5;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (id)_initWithFormat:(id)a0 locale:(id)a1 options:(id)a2 arguments:(char *)a3;
- (oneway void)release;

@end
