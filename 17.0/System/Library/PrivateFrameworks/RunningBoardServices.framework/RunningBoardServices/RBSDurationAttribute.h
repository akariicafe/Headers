@interface RBSDurationAttribute : RBSAttribute

@property (nonatomic) double invalidationDuration;
@property (nonatomic) double warningDuration;
@property (nonatomic) unsigned long long startPolicy;
@property (nonatomic) unsigned long long endPolicy;

+ (id)attributeWithDuration:(double)a0;
+ (id)invalidateAfterInterval:(double)a0;
+ (id)terminateAfterInterval:(double)a0;
+ (id)attributeWithDuration:(double)a0 warningDuration:(double)a1 startPolicy:(unsigned long long)a2 endPolicy:(unsigned long long)a3;

- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
