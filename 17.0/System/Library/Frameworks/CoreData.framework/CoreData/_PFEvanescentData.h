@class NSURL;

@interface _PFEvanescentData : NSData {
    unsigned long long _length;
    NSURL *_fileURL;
    int _openfd;
    const void *_activeMap;
    int _mapRefCount;
}

+ (Class)classForKeyedUnarchiver;

- (id)initWithPath:(id)a0;
- (id)initWithURL:(id)a0;
- (unsigned long long)hash;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)length;
- (void)invalidate;
- (const void *)bytes;
- (Class)classForCoder;
- (id)description;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (BOOL)isEqualToData:(id)a0;
- (void)getBytes:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (void)enumerateByteRangesUsingBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
