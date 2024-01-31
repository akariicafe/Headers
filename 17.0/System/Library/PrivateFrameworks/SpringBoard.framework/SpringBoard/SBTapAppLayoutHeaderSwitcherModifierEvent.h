@class SBAppLayout;

@interface SBTapAppLayoutHeaderSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long layoutRole;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppLayout:(id)a0 layoutRole:(long long)a1;

@end
