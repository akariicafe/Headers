@class SBDisplayItem, SBAppLayout, SBDisplayItemLayoutAttributes, SBContinuousExposeAutoLayoutSpace;
@protocol SBContinuousExposeWindowDragDestinationSwitcherModifierDelegate;

@interface SBContinuousExposeWindowDragDestinationSwitcherModifier : SBSwitcherModifier {
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _velocity;
    struct CGPoint { double x; double y; } _initialLocation;
    SBDisplayItemLayoutAttributes *_initialSelectedDisplayItemLayoutAttributes;
    BOOL _dragBeganInOtherSwitcher;
    SBContinuousExposeAutoLayoutSpace *_initialAutoLayoutSpace;
    SBAppLayout *_lastAppLayoutForStripCalculation;
    double _stripWidthForCancelZone;
}

@property (readonly, nonatomic) SBDisplayItem *selectedDisplayItem;
@property (readonly, nonatomic) SBAppLayout *initialAppLayout;
@property (readonly, weak, nonatomic) id<SBContinuousExposeWindowDragDestinationSwitcherModifierDelegate> destinationDelegate;
@property (readonly, nonatomic) unsigned long long proposedDestination;
@property (readonly, nonatomic) SBAppLayout *proposedAppLayout;
@property (readonly, nonatomic) SBAppLayout *hoveringOverAppLayout;

- (id)proposedAppLayoutForWindowDrag;
- (void)didMoveToParentModifier:(id)a0;
- (id)_appLayoutContainingDisplayItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)_anyProposedAppLayoutContainsSelectedDisplayItem;
- (id)_appLayoutByAddingItem:(id)a0 toAppLayout:(id)a1 size:(struct CGSize { double x0; double x1; })a2 center:(struct CGPoint { double x0; double x1; })a3 positionIsSystemManaged:(BOOL)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSelectedAppLayout:(id)a0 addingToStage:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSelectedDisplayItemAddingToStage:(BOOL)a0;
- (id)appLayoutByAddingAppLayout:(id)a0 toAppLayout:(id)a1;
- (id)handleGestureEvent:(id)a0;
- (id)initWithSelectedDisplayItem:(id)a0 initialAppLayout:(id)a1 delegate:(id)a2;
- (void)updateProposedAppLayoutWithAppLayout:(id)a0 andInitialAppLayout:(id)a1;

@end
