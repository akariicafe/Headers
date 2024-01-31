@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKSleepComparisonDayCoordinate : NSObject <HKGraphSeriesBlockCoordinate>

@property (readonly, nonatomic) double xValueStart;
@property (readonly, nonatomic) double xValueEnd;
@property (readonly, nonatomic) long long sleepValue;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly, nonatomic) double startXValue;
@property (readonly, nonatomic) double endXValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)initWithXValueStart:(double)a0 xValueEnd:(double)a1 sleepValue:(long long)a2 userInfo:(id)a3;

@end
