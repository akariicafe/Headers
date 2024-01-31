@class SBAppLayout;

@interface SBSwitcherModelRemovalRequestAction : NSObject

@property (readonly, nonatomic) long long actionType;
@property (readonly, copy, nonatomic) SBAppLayout *replacementAppLayout;

+ (id)replacementActionWithAppLayout:(id)a0;
+ (id)defaultRemovalPolicyAction;

- (void).cxx_destruct;
- (id)_initWithActionType:(long long)a0;

@end
