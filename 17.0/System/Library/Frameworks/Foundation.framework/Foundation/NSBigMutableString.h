@class NSData;

@interface NSBigMutableString : NSMutableString {
    struct { unsigned char isStorage : 1; unsigned char isUnicode : 1; unsigned char hasBOM : 1; unsigned char swap : 1; unsigned char immutable : 1; unsigned int  : 27; } flags;
    unsigned long long length;
    union { struct { NSData *data; char *dataBytes; } d; struct { struct __CFStorage *storage; } s; } contents;
}

- (BOOL)_getData:(id *)a0 encoding:(unsigned long long *)a1;
- (void)dealloc;
- (id)initWithStorage:(struct __CFStorage { } *)a0 length:(unsigned long long)a1 isUnicode:(BOOL)a2;
- (BOOL)_copyDataFrom:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (BOOL)_isCString;
- (id)_createSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_setStorage:(struct __CFStorage { } *)a0 encoding:(unsigned long long)a1;
- (id)_newBigSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 wantsMutable:(BOOL)a1 zone:(struct _NSZone { } *)a2;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (BOOL)_copyStorage:(struct __CFStorage **)a0 encoding:(unsigned long long *)a1;
- (void)_checkForInvalidMutationWithSelector:(SEL)a0;
- (id)initWithString:(id)a0;
- (BOOL)_setData:(id)a0 encoding:(unsigned long long)a1;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isMarkedAsImmutable;
- (id)_newSmallImmutableSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 zone:(struct _NSZone { } *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_markAsImmutable;

@end
