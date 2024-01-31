@class NSString, HMDThreadNetworkStatusReport, NSDictionary, NSUUID;

@interface HMDThreadNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, nonatomic) HMDThreadNetworkStatusReport *threadNetworkStatusReport;
@property (readonly, nonatomic) unsigned long long threadNetworkUptime;
@property (readonly, nonatomic) unsigned long long threadNetworkDowntime;
@property (readonly, nonatomic) unsigned long long numReadWrites;
@property (readonly, nonatomic) unsigned long long numReadErrors;
@property (readonly, nonatomic) unsigned long long numWriteErrors;
@property (readonly, nonatomic) unsigned long long numSessionErrors;
@property (readonly, nonatomic) NSString *topReadWriteError;
@property (readonly, nonatomic) NSString *topSessionError;
@property (readonly, nonatomic) NSString *logTriggerReason;
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
- (void).cxx_destruct;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)initWithHomeUUID:(id)a0 threadNetworkStatusReport:(id)a1 threadNetworkUptime:(unsigned long long)a2 threadNetworkDowntime:(unsigned long long)a3 numReadWrites:(unsigned long long)a4 numReadErrors:(unsigned long long)a5 numWriteErrors:(unsigned long long)a6 topReadWriteError:(id)a7 topSessionError:(id)a8 numSessionErrors:(unsigned long long)a9 logTriggerReason:(id)a10;
- (id)serializedLogEvent;

@end
