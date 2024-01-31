@class NSArray;

@interface HKSleepStageCoordinate : HKSleepPeriodCoordinate

@property (readonly, nonatomic) NSArray *awakeValues;
@property (readonly, nonatomic) NSArray *asleepUnspecifiedYValues;
@property (readonly, nonatomic) NSArray *asleepDeepYValues;
@property (readonly, nonatomic) NSArray *asleepCoreYValues;
@property (readonly, nonatomic) NSArray *asleepRemYValues;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)initWithXValue:(double)a0 asleepUnspecifiedYValues:(id)a1 asleepDeepYValues:(id)a2 asleepCoreYValues:(id)a3 asleepRemYValues:(id)a4 awakeValues:(id)a5 inBedYValues:(id)a6 yValues:(id)a7 highlighted:(BOOL)a8 userInfo:(id)a9;

@end
