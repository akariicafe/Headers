@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDAggregateRemoteMessageCountersLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, copy, nonatomic) NSString *transportType;
@property (readonly, copy, nonatomic) NSString *direction;
@property (readonly, copy, nonatomic) NSString *deviceType;
@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly) BOOL isPrimaryResident;
@property (readonly, copy, nonatomic) NSNumber *count;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aggregateRemoteCountersLogEventWithMessageName:(id)a0 deviceType:(id)a1 transportType:(id)a2 direction:(id)a3 isPrimaryResident:(BOOL)a4 count:(id)a5;

- (id)init;
- (void).cxx_destruct;
- (id)__initWithMessageName:(id)a0 deviceType:(id)a1 transportType:(id)a2 direction:(id)a3 isPrimaryResident:(BOOL)a4 count:(id)a5;

@end
