@class IDSSigningKeyDiversifier;

@interface IDSSigningOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int keyType;
@property (retain, nonatomic) IDSSigningKeyDiversifier *keyDiversifier;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeyType:(unsigned int)a0 diversifier:(id)a1;

@end
