@interface RBSProcessPlatformPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) int platform;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)initWithPlatform:(int)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
