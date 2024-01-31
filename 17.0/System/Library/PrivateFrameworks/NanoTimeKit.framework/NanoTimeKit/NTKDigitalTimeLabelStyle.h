@class NSNumber, NTKLayoutRule;

@interface NTKDigitalTimeLabelStyle : CLKUITimeLabelStyle <NSCopying>

@property (retain, nonatomic) NTKLayoutRule *layoutRule;
@property (retain, nonatomic) NSNumber *tracking;

+ (id)_fontForDesign:(id)a0 withWeight:(double)a1 onDevice:(id)a2;
+ (id)defaultRoundedStyleForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRightSideMargin:(double)a1 applyAdvanceFudge:(BOOL)a2 forDevice:(id)a3;
+ (id)defaultStyleForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRightSideMargin:(double)a1 applyAdvanceFudge:(BOOL)a2 font:(id)a3 forDevice:(id)a4;
+ (id)defaultStyleForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRightSideMargin:(double)a1 applyAdvanceFudge:(BOOL)a2 forDevice:(id)a3;
+ (id)defaultStyleForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRightSideMargin:(double)a1 applyAdvanceFudge:(BOOL)a2 withBaselineY:(double)a3 forDevice:(id)a4;
+ (id)defaultStyleForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withRightSideMargin:(double)a1 applyAdvanceFudge:(BOOL)a2 withBaselineY:(double)a3 withFont:(id)a4 forDevice:(id)a5;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDevice:(id)a1;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 weight:(double)a1 forDevice:(id)a2;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withBaselineY:(double)a1 withFont:(id)a2 forDevice:(id)a3;
+ (id)smallInUpperRightCornerStyleForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withFont:(id)a1 forDevice:(id)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
