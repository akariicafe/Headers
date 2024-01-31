@class SBSAContainerPanGestureDescription;

@interface SBSAContainerResizeBehaviorProvider : SBSABasePreferencesProvider {
    SBSAContainerPanGestureDescription *_activeGestureDescription;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFrameOfContainerViewForActiveGesture;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _minimumFrameOfContainerViewForActiveGesture;
    long long _resizeGestureResult;
}

- (void).cxx_destruct;
- (id)_contentResizeBehaviorSettings;
- (BOOL)_didContainerViewForActiveGestureCollapseWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialContainerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isPrimaryContainer:(BOOL)a2 activeInterfaceOrientation:(long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForAdjunctContainerViewDescription:(id)a0 resizedWithGestureDescription:(id)a1 initialContainerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 context:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForContainerViewDescription:(id)a0 resizedWithGestureDescription:(id)a1 initialContainerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 context:(id)a3;
- (id)_preferencesUpdatedWithCollapseOfElement:(id)a0 activeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 initialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 minimumFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 preferences:(id)a4;
- (id)preferencesFromContext:(id)a0;

@end
