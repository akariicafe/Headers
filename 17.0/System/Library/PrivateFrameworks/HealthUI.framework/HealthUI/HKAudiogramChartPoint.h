@class NSNumber, HKAudiogramChartData, NSString;

@interface HKAudiogramChartPoint : NSObject <HKGraphSeriesBlockCoordinateInfo, HKChartPoint>

@property (readonly, nonatomic) NSNumber *xValue;
@property (readonly, nonatomic) NSNumber *yValue;
@property (readonly, nonatomic) HKAudiogramChartData *chartData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_chartPointFromSensitivityPoint:(id)a0 isLeftEar:(BOOL)a1;
+ (double)axisValueFromFrequency:(double)a0;
+ (id)chartPointsFromSensitivityPoints:(id)a0 isLeftEar:(BOOL)a1;
+ (double)frequencyFromAxisValue:(double)a0;

- (id)userInfo;
- (void).cxx_destruct;
- (id)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)xValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)initWithChartData:(id)a0;

@end
