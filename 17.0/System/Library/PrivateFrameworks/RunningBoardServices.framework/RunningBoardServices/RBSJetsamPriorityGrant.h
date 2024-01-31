@interface RBSJetsamPriorityGrant : RBSGrant

@property (readonly, nonatomic) unsigned long long band;

+ (id)grantWithBand:(unsigned long long)a0;
+ (id)grantWithBackgroundPriority;
+ (id)grantWithForegroundPriority;
+ (BOOL)supportsRBSXPCSecureCoding;

- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
