@interface _PFResultUniString : _PFResultString {
    unsigned int _length;
}

+ (unsigned long long)bufferOffset;
+ (void)initialize;
+ (struct __CFAllocator { } *)cfDeallocator;

- (unsigned long long)hash;
- (unsigned long long)cStringLength;
- (const char *)UTF8String;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (BOOL)_isCString;
- (BOOL)isEqualToString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isEqual:(id)a0;
- (void)getCString:(char *)a0;
- (void)getCharacters:(unsigned short *)a0;

@end
