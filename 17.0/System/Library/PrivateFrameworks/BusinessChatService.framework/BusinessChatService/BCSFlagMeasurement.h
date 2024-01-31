@class NSArray;

@interface BCSFlagMeasurement : BCSMeasurement {
    BOOL _flagWasSet;
    NSArray *_realTimeMeasurementHandlers;
}

@property (readonly, nonatomic) long long flagMeasurementType;
@property (nonatomic) BOOL flag;

+ (id)newFlagMeasurement:(long long)a0 withHandlers:(id)a1;

- (void).cxx_destruct;

@end
