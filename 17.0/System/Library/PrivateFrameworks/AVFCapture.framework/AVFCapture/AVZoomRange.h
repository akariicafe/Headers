@interface AVZoomRange : NSObject

@property (readonly, nonatomic) double minZoomFactor;
@property (readonly, nonatomic) double maxZoomFactor;

+ (id)zoomRangeWithMinZoomFactor:(double)a0 maxZoomFactor:(double)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsZoomFactor:(double)a0;
- (id)initWithMinZoomFactor:(double)a0 maxZoomFactor:(double)a1;

@end
