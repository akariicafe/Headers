@interface TSWPInteriorTextWrapController : NSObject <TSWPTextWrap>

+ (id)sharedInteriorTextWrapController;

- (double)nextUnobstructedSpanStartingAt:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wrappableAttachments:(id)a1 userInfo:(id)a2;
- (id)beginWrappingToColumn:(id)a0 columnTransformFromWP:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 target:(id)a2 hasWrappables:(out BOOL *)a3;
- (BOOL)checkForUnobstructedSpan:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wrappableAttachments:(id)a1 userInfo:(id)a2;
- (void)splitLine:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(inout id)a1 wrappableAttachments:(id)a2 ignoreFloatingGraphics:(BOOL)a3 canvasCausedWrap:(out BOOL *)a4 skipHint:(out double *)a5 userInfo:(id)a6;

@end
