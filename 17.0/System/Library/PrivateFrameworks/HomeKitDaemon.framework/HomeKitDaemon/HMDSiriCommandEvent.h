@class NSString, NSDictionary, NSUUID;

@interface HMDSiriCommandEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) NSString *outcome;
@property (readonly, nonatomic) unsigned long long numberOfEntities;
@property (readonly, nonatomic) unsigned long long numberOfFailures;
@property (readonly, nonatomic) unsigned long long numberOfIncompletions;
@property (readonly, nonatomic) unsigned long long configurationVersion;
@property (readonly, nonatomic) unsigned long long lastSyncedConfigurationVersion;
@property (readonly, nonatomic) unsigned long long serverConfigurationVersion;
@property (readonly, nonatomic) NSString *clientMetricIdentifier;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandEventWithDuration:(unsigned long long)a0 actionType:(id)a1 outcome:(id)a2 numberOfEntities:(unsigned long long)a3 numberOfFailures:(unsigned long long)a4 numberOfIncompletions:(unsigned long long)a5 serverConfigurationVersion:(unsigned long long)a6 configurationVersion:(unsigned long long)a7 lastSyncedConfigurationVersion:(unsigned long long)a8;
+ (unsigned long long)generateErrorCodeWithNumberOfFailures:(unsigned long long)a0 numberOfIncompletions:(unsigned long long)a1 commandOutcome:(id)a2;

- (void).cxx_destruct;
- (id)initWithDuration:(unsigned long long)a0 actionType:(id)a1 outcome:(id)a2 numberOfEntities:(unsigned long long)a3 numberOfFailures:(unsigned long long)a4 numberOfIncompletions:(unsigned long long)a5 serverConfigurationVersion:(unsigned long long)a6 configurationVersion:(unsigned long long)a7 lastSyncedConfigurationVersion:(unsigned long long)a8;

@end
