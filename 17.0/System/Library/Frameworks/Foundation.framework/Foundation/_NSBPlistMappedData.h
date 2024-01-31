@interface _NSBPlistMappedData : NSData {
    void *ptr;
    unsigned long long size;
    unsigned long long mappingIndex;
    struct { unsigned char _unused[5]; unsigned char _sortVersion; unsigned char _offsetIntSize; unsigned char _objectRefSize; unsigned long long _numObjects; unsigned long long _topObject; unsigned long long _offsetTableOffset; } bplistTrailer;
    unsigned long long bplistOffset;
    unsigned char bplistMarker;
}

- (void)dealloc;
- (unsigned long long)length;
- (long long)mappingIndex;
- (const void *)bytes;
- (BOOL)_getBPlistMarker:(char *)a0 offset:(unsigned long long *)a1 trailer:(struct { unsigned char x0[5]; unsigned char x1; unsigned char x2; unsigned char x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; } *)a2;
- (unsigned long long)_bplistObjectsRangeEnd;
- (id)initWithBinaryPlistData:(void *)a0 size:(unsigned long long)a1 trailer:(struct { unsigned char x0[5]; unsigned char x1; unsigned char x2; unsigned char x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })a2 offset:(unsigned long long)a3 marker:(unsigned char)a4;
- (void)setMappingIndex:(long long)a0;
- (id)initWithFileURL:(id)a0 error:(id *)a1;

@end
