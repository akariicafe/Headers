@class TSDPathSource;

@interface TSDConnectionLineRep : TSDShapeRep {
    TSDPathSource *mLastPathSource;
}

+ (BOOL)canConnectToRep:(id)a0;
+ (id)infosToConnectFromSelection:(id)a0 withInteractiveCanvasController:(id)a1;

- (BOOL)isDraggable;
- (void)dealloc;
- (BOOL)isSelectable;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)directlyManagesLayerContent;
- (unsigned long long)enabledKnobMask;
- (id)additionalRepsForDragging;
- (BOOL)canBeUsedForImageMask;
- (BOOL)canConnectToRep:(id)a0;
- (BOOL)canMakePathEditable;
- (BOOL)canUseSpecializedHitRegionForKnob:(id)a0;
- (id)connectionLineLayout;
- (struct CGPoint { double x0; double x1; })i_dragOffset;
- (BOOL)i_editMenuOverlapsEndKnobs;
- (BOOL)p_controlKnobVisible;
- (BOOL)p_isConnected;
- (BOOL)p_isConnectedToLockedObjects;
- (double)shortestDistanceToPoint:(struct CGPoint { double x0; double x1; })a0 countAsHit:(BOOL *)a1;
- (BOOL)shouldCreateKnobs;
- (BOOL)shouldCreateSelectionKnobs;
- (BOOL)shouldShowCommentHighlight;
- (BOOL)shouldShowSmartShapeKnobs;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRectForEditMenu;
- (void)updateFromLayout;

@end
