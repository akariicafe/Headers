@interface _PFResultData : NSData {
    int _cd_rc;
    unsigned int _length;
    id _parentObject;
}

+ (Class)classForKeyedUnarchiver;

- (id)retain;
- (id)init;
- (void)getBytes:(void *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)length;
- (id)mutableCopy;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfData:(id)a0 options:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (const void *)bytes;
- (Class)classForCoder;
- (id)description;
- (void)getBytes:(void *)a0 length:(unsigned long long)a1;
- (BOOL)writeToFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)isEqualToData:(id)a0;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeToURL:(id)a0 atomically:(BOOL)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)setParentObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
