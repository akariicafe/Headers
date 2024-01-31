@class SBAppLayout;

@interface SBNotifyIconWillZoomDownSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;

- (id)initWithAppLayout:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (long long)type;

@end
