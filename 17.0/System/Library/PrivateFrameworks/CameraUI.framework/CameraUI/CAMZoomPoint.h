@class NSArray;

@interface CAMZoomPoint : NSObject

@property (readonly, nonatomic) long long customLens;
@property (readonly, nonatomic) BOOL isCustomLens;
@property (readonly, nonatomic) CAMZoomPoint *baseZoomPoint;
@property (readonly, nonatomic) CAMZoomPoint *fundamentalZoomPoint;
@property (readonly, nonatomic) NSArray *allZoomPoints;
@property (readonly, nonatomic) double zoomFactor;
@property (readonly, nonatomic) double displayZoomFactor;

+ (id)zoomFactorsFromZoomPoints:(id)a0;
+ (BOOL)_canExtendFromCustomLens:(long long)a0 toLens:(long long)a1 withIntermediateLens:(out long long *)a2;
+ (id)displayZoomFactorsFromZoomPoints:(id)a0;
+ (id)zoomPointsWithFactors:(id)a0 displayZoomFactors:(id)a1;
+ (id)significantIndexesInZoomPoints:(id)a0;
+ (id)zoomPointWithFactor:(double)a0 displayed:(double)a1;
+ (id)zoomPointWithCustomLens:(long long)a0 baseZoomPoint:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToZoomPoint:(id)a0;

@end
