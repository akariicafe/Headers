@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1;

- (void)setNeedsDisplay;
- (struct CGColor { } *)selectionHighlightColor;
- (BOOL)isDraggable;
- (Class)layerClass;
- (void)drawInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertNaturalPointFromUnscaledCanvas:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)directlyManagesLayerContent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInUnscaledCanvas;
- (void)processChangedProperty:(int)a0;
- (id)allRepsContainedInGroup;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 withSlop:(struct CGSize { double x0; double x1; })a1;
- (BOOL)handleDoubleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)intersectsUnscaledRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)recursivelyDrawInContext:(struct CGContext { } *)a0;
- (BOOL)shouldShowCommentHighlight;
- (BOOL)shouldShowSelectionHighlight;
- (BOOL)wantsToHandleTapsWhenLocked;

@end
