@interface CKBigEmojiBalloonView : CKTextBalloonView

- (BOOL)hasBackground;
- (id)accessibilityIdentifier;
- (void)addFilter:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setGradientReferenceView:(id)a0;
- (void)setImage:(id)a0;
- (void)clearFilters;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (void)setHasOverlay:(BOOL)a0 autoDismiss:(BOOL)a1;

@end
