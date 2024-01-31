@class SBAppLayout;

@interface SBUpdateFocusedAppLayoutSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic, getter=isFocused) BOOL focused;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppLayout:(id)a0 focused:(BOOL)a1;

@end
