@class NSString, NSDate;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKNumericChartPoint : NSObject <HKChartPoint> {
    NSDate *_xValue;
    id _yValue;
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userInfo;
- (void).cxx_destruct;
- (id)yValue;
- (id)allYValues;
- (id)maxXValueAsGenericType;
- (id)maxYValue;
- (id)minXValueAsGenericType;
- (id)minYValue;
- (id)xValueAsGenericType;
- (id)yValueForKey:(id)a0;
- (id)initWithXValue:(id)a0 yValue:(id)a1 userInfo:(id)a2;

@end
