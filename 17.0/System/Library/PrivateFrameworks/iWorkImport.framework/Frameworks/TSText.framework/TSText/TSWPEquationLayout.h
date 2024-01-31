@class TSDLayoutGeometry, TSDShadow, TSWPEquationInfo, NSString;
@protocol EQKitLayout, EQKitLayoutContext;

@interface TSWPEquationLayout : TSDMediaLayout <TSKChangeSourceObserver>

@property (retain, nonatomic) id<EQKitLayout> equationLayout;
@property (nonatomic) BOOL equationIsValid;
@property (retain, nonatomic) TSDLayoutGeometry *equationGeometry;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } layoutToStrokeTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } layoutToEquationTransform;
@property (retain, nonatomic) id<EQKitLayoutContext> equationLayoutContext;
@property (retain, nonatomic) TSDLayoutGeometry *baseEquationLayoutGeometry;
@property (retain, nonatomic) TSDLayoutGeometry *baseInfoGeometry;
@property (readonly, nonatomic) TSWPEquationInfo *equationInfo;
@property (readonly, nonatomic) TSDLayoutGeometry *equationGeometryInRoot;
@property (readonly, nonatomic) struct CGColor { } *textColor;
@property (readonly, nonatomic) TSDShadow *textShadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setParent:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsRotation;
- (void)invalidateSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeAlignmentFrameInRoot:(BOOL)a0;
- (void)offsetGeometryBy:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)supportsFlipping;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adornmentBoundsWithEquationSize:(struct CGSize { double x0; double x1; })a0;
- (void)preprocessChanges:(id)a0 forChangeSource:(id)a1;

@end
