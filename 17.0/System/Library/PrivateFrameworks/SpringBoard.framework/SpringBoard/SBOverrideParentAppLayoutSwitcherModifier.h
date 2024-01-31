@class SBAppLayout;

@interface SBOverrideParentAppLayoutSwitcherModifier : SBSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *childAppLayout;
@property (readonly, nonatomic) SBAppLayout *parentAppLayout;

- (id)appLayoutContainingAppLayout:(id)a0;
- (id)appLayoutsContainedWithinAppLayout:(id)a0;
- (void).cxx_destruct;
- (id)initWithChildAppLayout:(id)a0 newParentAppLayout:(id)a1;

@end
