@class NSString;

@interface FBSProcessExecutionStrategy : NSObject <NSCopying, BSDescriptionProviding>

@property (copy, nonatomic) NSString *strategyName;
@property (nonatomic) long long schedulingPolicy;
@property (nonatomic) long long graphicsPolicy;
@property (nonatomic) long long jetsamPolicy;
@property (nonatomic, getter=isCustomPolicy) BOOL customPolicy;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int flags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)background;
+ (id)userInteractive;
+ (id)backgroundWithUI;
+ (id)policyWithReason:(unsigned int)a0 flags:(unsigned int)a1;
+ (id)strategyForSchedulingPolicy:(long long)a0 graphicsPolicy:(long long)a1 jetsamPolicy:(long long)a2;
+ (id)userInteractiveWithoutUI;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
