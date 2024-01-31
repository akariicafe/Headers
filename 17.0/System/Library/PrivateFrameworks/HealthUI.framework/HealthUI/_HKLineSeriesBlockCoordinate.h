@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKLineSeriesBlockCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } coordinate;
@property (readonly, nonatomic) double startXValue;
@property (readonly, nonatomic) double endXValue;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)maxYValue;
- (double)minYValue;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)initWithCoordinate:(struct CGPoint { double x0; double x1; })a0 userInfo:(id)a1;

@end
