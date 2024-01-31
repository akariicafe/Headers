@interface RBSCPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;

+ (id)grantWithRole:(unsigned char)a0;
+ (id)grantWithUserInteractivityAndFocus;
+ (id)grantUserInitiated;
+ (id)grant;
+ (id)grantWithUserInteractivity;

- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
