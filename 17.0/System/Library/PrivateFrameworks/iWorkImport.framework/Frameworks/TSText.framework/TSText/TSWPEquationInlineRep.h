@class TSWPEquationInlineLayout, TSWPEquationInfo;

@interface TSWPEquationInlineRep : TSWPEquationBaseRep

@property (readonly, nonatomic) TSWPEquationInlineLayout *equationLayout;
@property (readonly, nonatomic) TSWPEquationInfo *equationInfo;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)drawInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (BOOL)isPlaceholder;
- (void)willBeRemoved;
- (BOOL)shouldAllowReplacementFromPaste;
- (BOOL)canDrawInParallel;
- (void)drawInLayerContext:(struct CGContext { } *)a0;
- (id)imageOfStroke:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5 keepingChildrenPassingTest:(id /* block */)a6;
- (BOOL)canPasteDataFromPhysicalKeyboard:(id)a0;
- (void)drawErrorIconInContext:(struct CGContext { } *)a0;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(double)a3 withMask:(BOOL)a4 forLayer:(BOOL)a5 forShadow:(BOOL)a6 forHitTest:(BOOL)a7;
- (BOOL)p_shouldFlipShadowsInContext:(struct CGContext { } *)a0 forLayer:(BOOL)a1;
- (id)resizedGeometryForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
