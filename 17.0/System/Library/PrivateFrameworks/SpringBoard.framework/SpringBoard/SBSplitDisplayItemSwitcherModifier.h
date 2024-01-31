@class SBDisplayItem, SBSwitcherModifier, SBAppLayout;

@interface SBSplitDisplayItemSwitcherModifier : SBSwitcherModifier

@property (nonatomic) BOOL hasInvalidatedAppLayoutsForInsertion;
@property (nonatomic) BOOL hasInvalidatedAppLayoutsForRemoval;
@property (retain, nonatomic) SBAppLayout *overrideAndPromoteChildAppLayout;
@property (readonly, nonatomic) SBDisplayItem *displayItem;
@property (readonly, nonatomic) SBSwitcherModifier *wrappingModifier;

- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)a0;
- (id)appLayoutContainingAppLayout:(id)a0;
- (id)resizeGrabberLayoutAttributesForAppLayout:(id)a0;
- (id)preferredAppLayoutToReuseAccessoryForAppLayout:(id)a0 fromAppLayouts:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLayoutRole:(long long)a0 inAppLayout:(id)a1 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (id)initWithDisplayItem:(id)a0;
- (id)handleEvent:(id)a0;
- (void)_performOverrideAndPromoteChildAppLayoutToParent:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)completesWhenChildrenComplete;
- (id)initWithDisplayItem:(id)a0 wrappingModifier:(id)a1;

@end
