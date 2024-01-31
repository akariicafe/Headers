@class UIBezierPath, NSArray, NSDictionary;

@interface NTKBezierPathPointModel : NSObject {
    NSArray *_pathElements;
    NSDictionary *_horizontalPercentageCache;
}

@property (readonly, nonatomic) UIBezierPath *path;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)_buildHorizontalPercentageCache;
- (double)_computeDistanceBetweenPointA:(struct CGPoint { double x0; double x1; })a0 andPointB:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })_computePointOnPathForHorizontalPercentage:(double)a0;
- (double)_estimatePercentageForEndPadding:(double)a0;
- (struct CGPoint { double x0; double x1; })pointOnPathForHorizontalPercentage:(double)a0;
- (struct CGPoint { double x0; double x1; })pointOnPathForHorizontalPercentage:(double)a0 withEndPadding:(double)a1;

@end
