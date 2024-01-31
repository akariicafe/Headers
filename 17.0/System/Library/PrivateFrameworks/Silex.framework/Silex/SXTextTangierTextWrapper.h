@class NSArray, NSMutableArray;

@interface SXTextTangierTextWrapper : NSObject <TSWPTextWrap>

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } canvasSpaceToWrapSpace;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } wrapSpaceToCanvasSpace;
@property (retain, nonatomic) NSMutableArray *tangierExclusionPaths;
@property (retain, nonatomic) NSArray *exclusionPaths;

- (void).cxx_destruct;
- (id)beginWrappingToColumn:(id)a0 target:(id)a1 hasWrapables:(BOOL *)a2;
- (id)collectWrappables:(id)a0 target:(id)a1;
- (id)groupInfoContainingWrappable:(id)a0;
- (unsigned long long)intersectRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 rects1Count:(unsigned long long)a1 rects2:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 rects2Count:(unsigned long long)a3 minSize:(double)a4;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wrappableAttachments:(id)a1 userInfo:(id)a2;
- (unsigned int)splitLine:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; }[128])a1 wrappableAttachments:(id)a2 ignoreFloatingGraphics:(BOOL)a3 floatingCausedWrap:(BOOL *)a4 skipHint:(double *)a5 userInfo:(id)a6;
- (unsigned long long)splitLineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; }[128])a1 wrappable:(id)a2 wrapContext:(id)a3;
- (unsigned long long)splitLineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineSegmentRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; }[128])a1 wrappableRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)textShouldFlowAroundWrappable:(id)a0 inTarget:(id)a1 inColumn:(id)a2;

@end
