@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying> {
    void *_bytes;
    unsigned long long _length;
    unsigned long long _mappedLength;
    unsigned long long _capacity;
    unsigned long long _threshold;
    char *_path;
    int _fd;
    unsigned long long _flushFrom;
    BOOL _flush;
    BOOL _immutable;
    BOOL _vm;
}

- (id)initWithLength:(unsigned long long)a0;
- (void)appendData:(id)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (void)setLength:(unsigned long long)a0;
- (id)init;
- (id)initWithContentsOfURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)dealloc;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (BOOL)mf_immutable;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)mf_makeImmutable;
- (id)initWithContentsOfFile:(id)a0;
- (unsigned long long)length;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (void *)mutableBytes;
- (void)_flushToDisk:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (id)initWithData:(id)a0;
- (const void *)bytes;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)_initWithFd:(int)a0 path:(id)a1 mutable:(BOOL)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setMappingThreshold:(unsigned int)a0;
- (void)_mapMutableData:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
