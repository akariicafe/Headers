@class SBSplitDisplayItemSwitcherModifier, SBAppLayout;

@interface SBSplitDisplayItemCrossblurSwitcherModifier : SBSwitcherModifier {
    SBSplitDisplayItemSwitcherModifier *_toSplitDisplayItemModifier;
    long long _floatingConfiguration;
}

@property (readonly, nonatomic) SBAppLayout *fromAppLayout;
@property (readonly, nonatomic) SBAppLayout *toAppLayout;
@property (readonly, nonatomic) long long layoutRole;

- (id)appLayoutContainingAppLayout:(id)a0;
- (id)containerLeafAppLayoutForShelf:(id)a0;
- (id)visibleHomeAffordanceLayoutElements;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForShelf:(id)a0;
- (id)topMostLayoutElements;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (id)handleEvent:(id)a0;
- (id)homeAffordanceLayoutElementToPortalIntoShelf:(id)a0;
- (id)_previousHomeAffordanceAppLayout;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2 layoutRole:(long long)a3;

@end
