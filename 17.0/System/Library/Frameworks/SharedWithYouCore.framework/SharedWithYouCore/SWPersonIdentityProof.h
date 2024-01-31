@class NSData, NSArray;

@interface SWPersonIdentityProof : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *publicKey;
@property (nonatomic) unsigned long long localKeyIndex;
@property (readonly, copy, nonatomic) NSArray *inclusionHashes;
@property (readonly, nonatomic) unsigned long long publicKeyIndex;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInclusionHashes:(id)a0;
- (id)initWithInclusionHashes:(id)a0 publicKey:(id)a1 localKeyIndex:(unsigned long long)a2;

@end
