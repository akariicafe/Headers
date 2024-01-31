@class BCSTimingMeasurement, NSString;

@interface BCSBusinessCallerFetchMetric : BCSMetric <BCSItemFetchMetricProtocol>

@property (nonatomic) long long errorCode;
@property (retain, nonatomic) BCSTimingMeasurement *timingMeasurement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metricWithPostProcessingMetricHandlers:(id)a0;

- (void).cxx_destruct;

@end
