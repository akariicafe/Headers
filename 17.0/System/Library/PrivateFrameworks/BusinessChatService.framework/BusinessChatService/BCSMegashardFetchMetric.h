@class NSString, NSDictionary;

@interface BCSMegashardFetchMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSMegashardFetchMetricProtocol>

@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (nonatomic) unsigned long long reason;
@property (nonatomic) long long hoursSinceLastSuccessfulFetch;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metricForMegashardType:(long long)a0 postProcessingMetricHandlers:(id)a1;


@end
