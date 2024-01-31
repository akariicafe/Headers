@class NSString, HMDThreadNetworkStatusReport, NSDictionary, NSUUID;

@interface HMDHouseholdThreadNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, nonatomic) unsigned long long numStabilityReporters;
@property (readonly, nonatomic) HMDThreadNetworkStatusReport *threadNetworkStatusReport;
@property (readonly, nonatomic) unsigned long long threadNetworkUptime;
@property (readonly, nonatomic) unsigned long long threadNetworkDowntime;
@property (readonly, nonatomic) unsigned long long numReadWrites;
@property (readonly, nonatomic) unsigned long long numReadErrors;
@property (readonly, nonatomic) unsigned long long numWriteErrors;
@property (readonly, nonatomic) unsigned long long numSessionErrors;
@property (readonly, nonatomic) unsigned long long numNetworkSignatures;
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
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)initWithHomeUUID:(id)a0 numStabilityReporters:(unsigned long long)a1 threadNetworkStatusReport:(id)a2 threadNetworkUptime:(unsigned long long)a3 threadNetworkDowntime:(unsigned long long)a4 numReadWrites:(unsigned long long)a5 numReadErrors:(unsigned long long)a6 numWriteErrors:(unsigned long long)a7 numSessionErrors:(unsigned long long)a8;

@end
