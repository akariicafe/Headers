@class NSString;

@interface HealthRecordsUI.MedicalRecordChartPoint : NSObject <HKChartPoint> {
    void /* unknown type, empty encoding */ chartableSet;
    void /* unknown type, empty encoding */ blockCoordinateInfo;
    void /* unknown type, empty encoding */ sortedYValues;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
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

@end
