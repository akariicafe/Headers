@interface FSFileDataBuffer : NSObject <NSSecureCoding> {
    unsigned long long _vma;
    unsigned int _mp;
    unsigned long long _internalCapacity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long length;

+ (id)dataWithLength:(unsigned long long)a0;

- (id)initWithLength:(unsigned long long)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (const void *)bytes;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (BOOL)ensureMappedMB:(unsigned long long)a0;
- (BOOL)ensureMapped;
- (id)initWithCapacity:(unsigned long long)a0 andLength:(unsigned long long)a1;
- (unsigned long long)internalCapacity;

@end
