@class NSArray, NSNumber;

@interface HKSleepDurationCoordinate : HKMinMaxCoordinate

@property (copy, nonatomic) NSArray *stackPoints;
@property (copy, nonatomic) NSNumber *goalLineYValue;
@property (readonly, nonatomic) BOOL highlighted;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)initWithStackPoints:(id)a0 goalLineYValue:(id)a1 highlighted:(BOOL)a2 userInfo:(id)a3;

@end
