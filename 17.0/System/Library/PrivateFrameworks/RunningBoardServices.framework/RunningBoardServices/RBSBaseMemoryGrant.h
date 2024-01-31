@class NSString;

@interface RBSBaseMemoryGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned char strength;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)grantWithActiveLimit;
+ (id)grantWithCategory:(id)a0 strength:(unsigned char)a1;

- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
