@interface RBSAcquisitionCompletionAttribute : RBSAttribute

@property (readonly, nonatomic) unsigned long long policy;

+ (id)attributeWithCompletionPolicy:(unsigned long long)a0;

- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
