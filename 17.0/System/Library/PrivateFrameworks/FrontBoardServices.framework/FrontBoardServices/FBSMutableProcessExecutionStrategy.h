@interface FBSMutableProcessExecutionStrategy : FBSProcessExecutionStrategy

@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int flags;
@property (nonatomic) long long schedulingPolicy;
@property (nonatomic) long long graphicsPolicy;
@property (nonatomic) long long jetsamPolicy;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
