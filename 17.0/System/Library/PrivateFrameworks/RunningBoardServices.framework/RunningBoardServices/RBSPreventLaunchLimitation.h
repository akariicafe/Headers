@class RBSProcessPredicate;

@interface RBSPreventLaunchLimitation : RBSLimitation

@property (readonly, nonatomic) RBSProcessPredicate *predicate;
@property (readonly, nonatomic) RBSProcessPredicate *allow;

+ (id)limitationWithPredicate:(id)a0;
+ (id)limitationWithPredicate:(id)a0 andException:(id)a1;

- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;

@end
