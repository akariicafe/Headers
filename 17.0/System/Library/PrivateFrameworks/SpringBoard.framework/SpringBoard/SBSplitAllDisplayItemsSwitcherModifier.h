@interface SBSplitAllDisplayItemsSwitcherModifier : SBSwitcherModifier

@property (nonatomic) BOOL hasInvalidatedAppLayoutsForInsertion;
@property (nonatomic) BOOL hasInvalidatedAppLayoutsForRemoval;

- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (id)handleEvent:(id)a0;

@end
