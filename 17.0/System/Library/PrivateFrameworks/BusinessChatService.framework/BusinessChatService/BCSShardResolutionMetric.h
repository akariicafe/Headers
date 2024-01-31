@class BCSFlagMeasurement, NSString, NSDictionary, BCSTimingMeasurement;
@protocol BCSShardItemIdentifying;

@interface BCSShardResolutionMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSShardItemIdentifierProviding, BCSResolutionMetricProtocol>

@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<BCSShardItemIdentifying> shardItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) BCSTimingMeasurement *timingMeasurement;
@property (retain, nonatomic) BCSFlagMeasurement *cacheHitMeasurement;

+ (id)metricForShardIdentifier:(id)a0 postProcessingMetricHandlers:(id)a1;

- (void).cxx_destruct;

@end
