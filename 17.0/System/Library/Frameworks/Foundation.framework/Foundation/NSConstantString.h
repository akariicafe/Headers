@interface NSConstantString : NSSimpleCString

- (id)retain;
- (unsigned long long)hash;
- (unsigned long long)cStringLength;
- (void)dealloc;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)autorelease;
- (const char *)cString;
- (BOOL)_tryRetain;
- (id)copy;
- (BOOL)isEqualToString:(id)a0;
- (const char *)_fastCStringContents:(BOOL)a0;
- (unsigned long long)smallestEncoding;
- (unsigned long long)fastestEncoding;
- (BOOL)_isDeallocating;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (const char *)lossyCString;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canBeConvertedToEncoding:(unsigned long long)a0;
- (long long)compare:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithCharactersNoCopy:(unsigned short *)a0 length:(unsigned long long)a1;

@end
