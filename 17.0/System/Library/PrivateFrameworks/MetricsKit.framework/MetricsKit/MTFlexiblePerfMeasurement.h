@class NSString, NSArray;

@interface MTFlexiblePerfMeasurement : MTPerfBaseMeasurement <MTFlexiblePerfMeasurementData>

@property (readonly, copy, nonatomic) NSString *eventType;
@property (readonly, copy, nonatomic) NSArray *eventData;
@property (readonly, copy, nonatomic) NSArray *additionalFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *eventType;

@end
