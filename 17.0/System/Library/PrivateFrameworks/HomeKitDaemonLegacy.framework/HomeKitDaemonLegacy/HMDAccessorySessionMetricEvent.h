@class NSString, NSUUID, HMDAccessory, NSDictionary;

@interface HMDAccessorySessionMetricEvent : HMDHAPMetrics <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, weak) HMDAccessory *accessory;
@property (readonly, nonatomic) BOOL isHomeThreadCapable;
@property (readonly, nonatomic) BOOL isPrimaryThreadCapable;
@property (readonly, nonatomic) BOOL isThreadNetworkUp;
@property (readonly, nonatomic) BOOL isPrimary;
@property (readonly, nonatomic) unsigned long long percentageDurationActiveSession;
@property (readonly, nonatomic) unsigned long long percentDurationReachable;
@property (readonly, nonatomic) double sessionCheckIntervalSec;
@property (readonly, nonatomic) unsigned long long sessionFailures;
@property (readonly, nonatomic) double submissionIntervalSec;
@property (readonly, nonatomic) unsigned long long successfulSessionRetries;
@property (readonly, nonatomic) long long topErrorCode;
@property (readonly, nonatomic) NSString *topErrorDomain;
@property (readonly, nonatomic) unsigned long long numActiveSessionClients;
@property (readonly, nonatomic) unsigned long long lastSeenSecondsAgo;
@property (readonly, nonatomic) BOOL lastSeenWithLowBattery;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSString *accessoryTransport;
@property (readonly, nonatomic) NSString *expectedTransport;
@property (readonly, nonatomic) BOOL isThreadAccessory;
@property (readonly, nonatomic) unsigned long long numIPAddresses;
@property (readonly, nonatomic) unsigned long long numIPAddressesTried;
@property (readonly, nonatomic) unsigned long long numBonjourNames;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 expectedTransport:(id)a1 homeUUID:(id)a2 topErrorDomain:(id)a3 topErrorCode:(long long)a4 sessionFailureCount:(unsigned long long)a5;
- (id)initWithAccessory:(id)a0 sessionMetric:(id)a1;

@end
