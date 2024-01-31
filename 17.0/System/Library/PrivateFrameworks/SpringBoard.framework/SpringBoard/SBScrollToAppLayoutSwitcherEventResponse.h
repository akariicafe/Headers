@class SBAppLayout;

@interface SBScrollToAppLayoutSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long alignment;
@property (readonly, nonatomic) BOOL animated;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithAppLayout:(id)a0 alignment:(long long)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (long long)type;

@end
