@interface STRPSampleByteEncodable : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct MyCoolStruct { BOOL aBool; unsigned int smolInt; unsigned char someOptions; unsigned long long anInt; } aStruct;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStruct:(struct MyCoolStruct { BOOL x0; unsigned int x1; unsigned char x2; unsigned long long x3; })a0;

@end
