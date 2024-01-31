@class NSArray, NSNumber, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKSleepPeriodCoordinate : NSObject <HKGraphSeriesBlockCoordinate>

@property (readonly, nonatomic) NSArray *asleepYValues;
@property (readonly, nonatomic) NSArray *inBedYValues;
@property (readonly, nonatomic) NSArray *yValues;
@property (readonly, nonatomic) NSNumber *upperGoalYValue;
@property (readonly, nonatomic) NSNumber *lowerGoalYValue;
@property (readonly, nonatomic) double xValue;
@property (readonly, nonatomic) BOOL highlighted;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly, nonatomic) double startXValue;
@property (readonly, nonatomic) double endXValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)initWithXValue:(double)a0 asleepYValues:(id)a1 inBedYValues:(id)a2 yValues:(id)a3 upperGoalYValue:(id)a4 lowerGoalYValue:(id)a5 highlighted:(BOOL)a6 userInfo:(id)a7;

@end
