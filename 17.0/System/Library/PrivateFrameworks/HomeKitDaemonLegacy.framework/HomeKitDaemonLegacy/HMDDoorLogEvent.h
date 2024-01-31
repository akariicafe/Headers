@class NSString, NSDictionary, NSUUID;

@interface HMDDoorLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, copy, nonatomic) NSString *accessoryUUID;
@property (readonly, copy, nonatomic) NSString *doorStatus;
@property (readonly, copy, nonatomic) NSString *characteristicUUID;
@property (readonly, copy, nonatomic) NSString *timeStamp;
@property (readonly, copy, nonatomic) NSString *homePresence;
@property (readonly, copy, nonatomic) NSString *triggerSource;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *userUUID;
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
- (id)initWithDoorStatus:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 timeStamp:(id)a3 homeUUID:(id)a4 homePresence:(id)a5 triggerSource:(id)a6 bundleId:(id)a7 userUUID:(id)a8;

@end
