@interface RBSCPUMinimumUsageGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;
@property (readonly, nonatomic) unsigned long long percentage;
@property (readonly, nonatomic) double duration;

+ (id)grantForRole:(unsigned char)a0 withPercentage:(unsigned long long)a1 duration:(double)a2;

- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
