@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKMinMaxCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } min;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } max;
@property (readonly, nonatomic) double startXValue;
@property (readonly, nonatomic) double endXValue;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)distanceToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)initWithChartPoint:(id)a0 xAxisTransform:(id)a1 yAxisTransform:(id)a2;
- (id)initWithMin:(struct CGPoint { double x0; double x1; })a0 max:(struct CGPoint { double x0; double x1; })a1 userInfo:(id)a2;
- (BOOL)isVisibleInChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })a0;

@end
