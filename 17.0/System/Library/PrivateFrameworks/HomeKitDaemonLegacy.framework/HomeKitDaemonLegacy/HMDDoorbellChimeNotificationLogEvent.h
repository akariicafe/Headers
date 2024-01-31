@class NSString, NSDictionary, NSUUID, NSError;

@interface HMDDoorbellChimeNotificationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property unsigned long long coreUtilsLatency;
@property unsigned long long coreUtilsDestinationCount;
@property BOOL coordinationPathTriggered;
@property unsigned long long coordinationLatency;
@property (copy) NSError *coordinationError;
@property unsigned long long coordinationMode;
@property unsigned long long numHomePodsWithDoorbellChimeEnabled;
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

@end
