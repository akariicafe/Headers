@class SBAppLayout;

@interface SBSwitcherDisplayItemRemovalResolutionResultAction : NSObject

@property (readonly, nonatomic) long long actionType;
@property (readonly, copy, nonatomic) SBAppLayout *appLayout;
@property (readonly, copy, nonatomic) SBAppLayout *replacementAppLayout;

+ (id)defaultRemovalPolicyActionWithAppLayout:(id)a0;
+ (id)replacementActionWithAppLayout:(id)a0 replacementAppLayout:(id)a1;

- (void).cxx_destruct;
- (id)_initWithAppLayout:(id)a0 actionType:(long long)a1;

@end
