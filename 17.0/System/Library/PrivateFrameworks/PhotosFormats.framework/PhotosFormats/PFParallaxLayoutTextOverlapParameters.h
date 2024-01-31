@interface PFParallaxLayoutTextOverlapParameters : NSObject

@property (class, retain, nonatomic) PFParallaxLayoutTextOverlapParameters *systemParameters;
@property (class, readonly, nonatomic) PFParallaxLayoutTextOverlapParameters *standardNumericTextParameters;
@property (class, readonly, nonatomic) PFParallaxLayoutTextOverlapParameters *standardAlphabeticTextParameters;

@property (readonly, nonatomic) double bottomAreaHeight;
@property (readonly, nonatomic) double targetBottomOverlap;
@property (readonly, nonatomic) double maxBottomOverlap;

- (double)maxTopOverlapForTopRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isInteractive:(BOOL)a1;

@end
