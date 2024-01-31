@interface LASecureData : NSObject {
    unsigned long long _allocatedLength;
    void *_bytes;
    unsigned long long _bytesLength;
}

+ (void)resetBytes:(void *)a0 length:(unsigned long long)a1;
+ (id)secureDataWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)secureDataWithData:(id)a0;
+ (id)secureDataWithString:(id)a0;

- (void)appendData:(id)a0;
- (id)init;
- (void)reset;
- (void)dealloc;
- (unsigned long long)length;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)appendString:(id)a0;
- (id)initWithData:(id)a0;
- (id)data;
- (const void *)bytes;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)resize:(unsigned long long)a0;
- (id)nullTerminatedCopy;
- (void)prepareBuffer:(unsigned long long)a0;
- (BOOL)removeLastCharacter;

@end
