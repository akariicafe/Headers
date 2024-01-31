@interface FSMutableFileDataBuffer : FSFileDataBuffer

+ (BOOL)supportsSecureCoding;
+ (id)dataWithLength:(unsigned long long)a0;
+ (id)dataWithCapacity:(unsigned long long)a0;

- (unsigned long long)capacity;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void *)mutableBytes;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
