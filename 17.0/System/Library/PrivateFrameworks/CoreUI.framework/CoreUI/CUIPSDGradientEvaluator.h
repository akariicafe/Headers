@class NSArray;

@interface CUIPSDGradientEvaluator : NSObject <NSCoding, NSCopying> {
    NSArray *colorStops;
    NSArray *colorMidpointLocations;
    NSArray *opacityStops;
    NSArray *opacityMidpointLocations;
    double smoothingCoefficient;
    struct _psdGradientColor { double red; double green; double blue; double alpha; } fillColor;
    struct { unsigned char colorEdgePixel : 2; unsigned char opacityEdgePixel : 2; unsigned char isDithered : 1; unsigned char reserved : 3; } pgeFlags;
}

@property (nonatomic) int blendMode;

+ (void)initialize;

- (struct _psdGradientColor { double x0; double x1; double x2; double x3; })fillColor;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isDithered;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)fillCoefficient;
- (id)_cleanedUpMidpointLocationsFromLocations:(id)a0;
- (void)_createOrderedStops:(id *)a0 midpoints:(id *)a1 fromStops:(id)a2 midpoints:(id)a3 edgePixel:(long long *)a4;
- (struct _psdGradientColor { double x0; double x1; double x2; double x3; })_smoothedGradientColorAtLocation:(double)a0;
- (double)_smoothedInterpolationOfLocation:(double)a0 betweenLower:(double)a1 upper:(double)a2 scaledMidpoint:(double)a3;
- (id)colorMidpointLocations;
- (id)colorStops;
- (void)customizeForDistance:(double)a0;
- (BOOL)hasEdgePixel;
- (id)initWithColorStops:(id)a0 colorMidpoints:(id)a1 opacityStops:(id)a2 opacityMidpoints:(id)a3 smoothingCoefficient:(double)a4 fillCoefficient:(double)a5;
- (id)initWithColorStops:(id)a0 colorMidpoints:(id)a1 opacityStops:(id)a2 opacityMidpoints:(id)a3 smoothingCoefficient:(double)a4 fillColor:(struct _psdGradientColor { double x0; double x1; double x2; double x3; })a5 dither:(BOOL)a6;
- (id)opacityMidpointLocations;
- (id)opacityStops;
- (void)setColorStops:(id)a0 midpoints:(id)a1;
- (void)setFillCoefficient:(double)a0;
- (void)setOpacityStops:(id)a0 midpoints:(id)a1;
- (void)setSmoothingCoefficient:(double)a0;
- (double)smoothingCoefficient;

@end
