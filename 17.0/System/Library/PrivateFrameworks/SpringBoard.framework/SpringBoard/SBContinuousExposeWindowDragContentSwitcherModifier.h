@class SBDisplayItem, SBContinuousExposeWindowDragSwitcherModifier;

@interface SBContinuousExposeWindowDragContentSwitcherModifier : SBSwitcherModifier

@property (readonly, nonatomic) SBDisplayItem *selectedDisplayItem;
@property (readonly, nonatomic) SBContinuousExposeWindowDragSwitcherModifier *gestureModifier;

- (id)adjustedAppLayoutsForAppLayouts:(id)a0;
- (void).cxx_destruct;
- (void)_createFloorAndMultitaskingModifiersWithAppLayout:(id)a0;
- (id)initWithGestureID:(id)a0 initialAppLayout:(id)a1 selectedDisplayItem:(id)a2;
- (void)updateFloorModifiersWithAppLayout:(id)a0;

@end
