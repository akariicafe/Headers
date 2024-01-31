@class NSArray, NSString, NSDictionary, NSUUID;

@interface HMDFetchAccessorySettingsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (copy, nonatomic) NSArray *failedKeyPaths;
@property (copy, nonatomic) NSArray *succeededKeyPaths;
@property (nonatomic) unsigned long long responseTimeStamp;
@property (readonly, copy, nonatomic) NSArray *keyPaths;
@property (readonly, nonatomic) unsigned long long startTimeStamp;
@property (readonly, copy, nonatomic) NSString *requestingClientName;
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
- (id)initWithKeyPaths:(id)a0 startTime:(unsigned long long)a1 requestingClientName:(id)a2 error:(id)a3;

@end
