@class NSString, NSDictionary, NSUUID;

@interface HMDSiriEndpointEnablementLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, nonatomic) unsigned long long numCapableSiriEndpointAccessories;
@property (readonly, nonatomic) unsigned long long numEnabledSiriEndpointAccessories;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)initWithConfigurationDataSource:(id)a0;
- (id)initWithHomeUUID:(id)a0 numCapableSiriEndpoints:(unsigned long long)a1 numEnabledSiriEndpoints:(unsigned long long)a2;
- (id)serializedMetric;

@end
