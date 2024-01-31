@class NSString, NSDictionary, BCSTimingMeasurement;

@interface BCSBusinessLinkRegisteredMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSItemFetchMetricProtocol, BCSBusinessLinkChoppingMetric>

@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) BCSTimingMeasurement *timingMeasurement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isChoppingEnabled) BOOL choppingEnabled;
@property (nonatomic) long long successfulChop;

+ (id)metricWithPostProcessingMetricHandlers:(id)a0;

- (void).cxx_destruct;

@end
