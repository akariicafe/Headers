@class NSString, NSDictionary, NSUUID, NSError, NSNumber;

@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, copy) NSNumber *role;
@property (readonly) unsigned long long setupStartTime;
@property (readonly) unsigned long long setupEndTime;
@property (readonly) unsigned long long accessoryAddEndTime;
@property (readonly) unsigned long long accessoryRemoveTime;
@property (readonly) unsigned long long configurationEndTime;
@property (readonly, copy) NSError *setupSessionError;
@property (readonly) BOOL isRepairSession;
@property (readonly, copy) NSString *setupSessionIdentifier;
@property (readonly, copy) NSString *category;
@property (readonly, copy) NSString *setupClientBundleID;
@property (readonly, copy) NSString *accessorySoftwareVersion;
@property (readonly, copy) NSNumber *retryCount;
@property (readonly) unsigned long long firstSettingTime;
@property (readonly) unsigned long long languageSettingTime;
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
- (id)initWithRole:(long long)a0 setupStartTime:(unsigned long long)a1 setupEndTime:(unsigned long long)a2 accessoryAddEndTime:(unsigned long long)a3 accessoryRemoveTime:(unsigned long long)a4 configurationEndTime:(unsigned long long)a5 setupSessionError:(id)a6 setupSessionIdentifier:(id)a7 isRepairSession:(BOOL)a8 category:(id)a9 accessorySoftwareVersion:(id)a10 setupClientBundleID:(id)a11 retryCount:(unsigned long long)a12 firstSettingTime:(unsigned long long)a13 languageSettingTime:(unsigned long long)a14;

@end
