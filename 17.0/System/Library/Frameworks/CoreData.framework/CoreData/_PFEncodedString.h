@interface _PFEncodedString : _PFAbstractString {
    int _cd_rc;
    unsigned int _length;
    id _sourceData;
}

- (id)retain;
- (id)init;
- (unsigned long long)hash;
- (unsigned long long)cStringLength;
- (void)dealloc;
- (unsigned long long)retainCount;
- (const char *)UTF8String;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (BOOL)_isCString;
- (BOOL)_tryRetain;
- (id)copy;
- (BOOL)isEqualToString:(id)a0;
- (BOOL)_isDeallocating;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isEqual:(id)a0;
- (void)getCString:(char *)a0;
- (void)getCharacters:(unsigned short *)a0;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
