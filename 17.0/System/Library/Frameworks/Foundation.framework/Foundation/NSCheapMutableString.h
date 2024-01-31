@interface NSCheapMutableString : NSMutableString {
    union { unsigned short *fat; char *thin; } contents;
    struct { unsigned char isFat : 1; unsigned char freeWhenDone : 1; unsigned int refs : 30; } flags;
    unsigned long long numCharacters;
    void *_reserved;
}

- (unsigned long long)cStringLength;
- (void)dealloc;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)setContentsNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2 isUnicode:(BOOL)a3;
- (const char *)cString;
- (unsigned long long)fastestEncoding;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const char *)lossyCString;
- (BOOL)getBytes:(void *)a0 maxLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 encoding:(unsigned long long)a3 options:(unsigned long long)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a6;

@end
