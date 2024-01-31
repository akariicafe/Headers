@protocol _UIFocusGuideRegionDelegate, UIFocusEnvironment;

@interface _UIFocusGuideRegion : _UIFocusRegion

@property (nonatomic, setter=_setIsUnoccludable:) BOOL _isUnoccludable;
@property (nonatomic, setter=_setFocusPriority:) float _focusPriority;
@property (nonatomic, setter=_setIgnoresSpeedBumpEdges:) BOOL _ignoresSpeedBumpEdges;
@property (nonatomic, setter=_setIsUnclippable:) BOOL _isUnclippable;
@property (weak, nonatomic) id<_UIFocusGuideRegionDelegate> delegate;
@property (weak, nonatomic) id<UIFocusEnvironment> owningEnvironment;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_canBeOccludedByRegionsAbove;
- (BOOL)_canOccludeRegionsBelow;
- (id)_debugAssociatedObject;
- (id)_debugDrawingConfigurationWithDebugInfo:(id)a0;
- (id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)a0;
- (id)_fallbackFocusItemForMovementRequest:(id)a0 inFocusMap:(id)a1 withSnapshot:(id)a2;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;
- (unsigned long long)_focusableBoundaries;
- (id)_focusedItemForLinearSorting:(id)a0 inMap:(id)a1 withSnapshot:(id)a2;
- (BOOL)_isEnabledForFocusedRegion:(id)a0 inSnapshot:(id)a1;
- (id)_nextFocusedItemForFocusMovementRequest:(id)a0 inMap:(id)a1 withSnapshot:(id)a2;
- (long long)_preferredDistanceComparisonType;
- (BOOL)_shouldCropRegionToSearchArea;
- (BOOL)_shouldUseNextFocusedItemForLinearSorting;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;

@end
