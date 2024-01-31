@interface BKUIJindoPositioningGuideView : BKUIPearlPositioningGuideView

@property (nonatomic) double targetLineYposition;
@property (nonatomic) double lineYpositionDifference;
@property (nonatomic) double startLineYposition;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)breathe;
- (double)_edgeDistanceHeightDifference;
- (id)_roundedRectMaskForMaskDistance:(double)a0 portalCenter:(struct CGPoint { double x0; double x1; })a1 cornerRadius:(double)a2;
- (double)_squareLayoutOpenValue;
- (void)_startAnimationWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)_updateChildrenValuesForDisplayTickProgress:(double)a0;
- (void)_updateTargetValuesForAnimation:(long long)a0 animationCurve:(long long)a1;
- (BOOL)needsMaskedNeedsPositionStyleEnrollment;
- (void)resetValuesToStart;

@end
