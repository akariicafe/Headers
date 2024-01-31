@class NSNumber, NSString, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKInsulinChartPoint : NSObject <HKChartPoint>

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *midDate;
@property (retain, nonatomic) NSNumber *basalSum;
@property (retain, nonatomic) NSNumber *totalSum;
@property (retain, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void).cxx_destruct;
- (id)yValue;
- (id)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)xValueAsGenericType;
- (id)yValueForKey:(id)a0;

@end
