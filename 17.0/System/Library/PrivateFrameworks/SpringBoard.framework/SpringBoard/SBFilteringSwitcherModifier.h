@class NSArray, NSString, SBSwitcherModifier, _SBFilteringPassthroughTargetSwitcherModifier, SBRoutingSwitcherModifier, NSSet;

@interface SBFilteringSwitcherModifier : SBSwitcherModifier <SBRoutingSwitcherModifierDelegate> {
    SBRoutingSwitcherModifier *_routingModifier;
    _SBFilteringPassthroughTargetSwitcherModifier *_passthroughModifier;
    NSSet *_displayItemsToFilter;
}

@property (readonly, copy, nonatomic) NSArray *appLayoutsToFilter;
@property (readonly, nonatomic) SBSwitcherModifier *modifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didMoveToParentModifier:(id)a0;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (id)fallbackModifierForRoutingModifier:(id)a0;
- (id)homeScreenModifierForRoutingModifier:(id)a0;
- (id)initWithAppLayouts:(id)a0 modifier:(id)a1;
- (id)routingModifier:(id)a0 animationAttributesModifierForLayoutElement:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })routingModifier:(id)a0 containerViewBoundsForModifier:(id)a1;
- (id)routingModifier:(id)a0 event:(id)a1 forModifier:(id)a2;
- (id)routingModifier:(id)a0 filteredAppLayouts:(id)a1 forModifier:(id)a2;
- (id)routingModifier:(id)a0 filteredContinuousExposeIdentifiers:(id)a1 forModifier:(id)a2;
- (id)routingModifier:(id)a0 modifierForAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })routingModifier:(id)a0 switcherViewBoundsForModifier:(id)a1;
- (id)scrollModifierForRoutingModifier:(id)a0;
- (id)transactionCompletionOptionsModifierForRoutingModifier:(id)a0;

@end
