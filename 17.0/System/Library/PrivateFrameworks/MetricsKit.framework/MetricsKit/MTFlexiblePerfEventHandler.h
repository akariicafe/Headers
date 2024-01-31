@class NSString;
@protocol MTFlexiblePerfEventHandlerDelegate;

@interface MTFlexiblePerfEventHandler : MTEventHandler <MTPerfBaseMeasurementTransformation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MTFlexiblePerfEventHandlerDelegate> delegate;

- (id)knownFields;
- (id)metricsDataWithEventType:(id)a0 eventData:(id)a1;
- (id)metricsDataWithPerfMeasurement:(id)a0;
- (BOOL)mtIncludeBaseFields;
- (id)xpSamplingPercentage:(id)a0;

@end
