@class NSArray, AKFormFeatureLine;

@interface AKFormFeatureSegmented : AKFormFeature

@property (retain, nonatomic) AKFormFeatureLine *baseline;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } enclosingRegionRect;
@property (retain, nonatomic) NSArray *characterSegmentRects;

+ (id)segments:(id)a0 withEnclosingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 baseline:(id)a2 onPage:(id)a3;

- (void).cxx_destruct;
- (id)initWithCharacterSegments:(id)a0 enclosingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 baseline:(id)a2 onPage:(id)a3;

@end
