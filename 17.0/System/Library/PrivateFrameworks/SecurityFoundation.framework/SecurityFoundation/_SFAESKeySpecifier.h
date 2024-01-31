@interface _SFAESKeySpecifier : _SFSymmetricKeySpecifier {
    id _aesKeySpecifierInternal;
}

@property (readonly, nonatomic) long long blockSize;
@property (nonatomic) long long bitSize;

+ (BOOL)supportsSecureCoding;
+ (Class)keyClass;

- (id)initWithBitSize:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)keyLengthInBytes;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
