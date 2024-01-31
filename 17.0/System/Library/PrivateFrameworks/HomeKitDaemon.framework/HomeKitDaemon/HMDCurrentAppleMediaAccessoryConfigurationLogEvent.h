@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDCurrentAppleMediaAccessoryConfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, copy) NSNumber *numPairedSensors;
@property (readonly, copy) NSNumber *sensorStatus;
@property (readonly, copy) NSNumber *numPairedSensorAutomations;
@property (readonly, copy) NSNumber *numMediaAutomations;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithNumPairedSensors:(id)a0 sensorStatus:(id)a1 numPairedSensorAutomations:(id)a2 numMediaAutomations:(id)a3;

@end
