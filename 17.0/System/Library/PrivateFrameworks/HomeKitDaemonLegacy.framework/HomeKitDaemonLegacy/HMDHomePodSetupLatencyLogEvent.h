@class NSString, NSDictionary, NSUUID;

@interface HMDHomePodSetupLatencyLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, nonatomic) unsigned long long setupStartTime;
@property (readonly, nonatomic) unsigned long long setupEndTime;
@property (readonly, nonatomic) unsigned long long settingsCreationTime;
@property (readonly, nonatomic) unsigned long long pairingIdentityCreationTime;
@property (readonly, nonatomic) unsigned long long accessoryAddProcessedTime;
@property (readonly, nonatomic) unsigned long long siriReadinessTime;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSetupStartTime:(unsigned long long)a0 setupEndTime:(unsigned long long)a1 settingsCreationTime:(unsigned long long)a2 pairingIdentityCreationTime:(unsigned long long)a3 accessoryAddProcessedTime:(unsigned long long)a4 siriReadinessTime:(unsigned long long)a5;

@end
