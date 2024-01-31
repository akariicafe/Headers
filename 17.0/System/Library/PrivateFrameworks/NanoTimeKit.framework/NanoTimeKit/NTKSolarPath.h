@class UIBezierPath, NTKSolarTimeModel;

@interface NTKSolarPath : NSObject {
    BOOL _usePlaceholderData;
    struct CGPoint { double x; double y; } _points[29];
    double _altitude[29];
}

@property (readonly, nonatomic) UIBezierPath *bezierPath;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) NTKSolarTimeModel *solarTimeModel;
@property (readonly, nonatomic) BOOL verticallyFitsPathToBounds;

- (void).cxx_destruct;
- (id)_computeSolarPath;
- (double)altitudeAtPercentage:(double)a0;
- (double)altitudeAtX:(double)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 solarTimeModel:(id)a1 verticallyFitsPathToBounds:(BOOL)a2 usePlaceholderData:(BOOL)a3;

@end
