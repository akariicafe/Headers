@interface _PFVMData : NSData {
    int _cd_rc;
    unsigned long long _length;
    void *_payload;
}

+ (Class)classForKeyedUnarchiver;

- (id)retain;
- (void)dealloc;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (const void *)bytes;
- (Class)classForCoder;
- (BOOL)_isDeallocating;
- (oneway void)release;

@end
