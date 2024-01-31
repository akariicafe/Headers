@class NSString, NSDictionary, NSUUID;

@interface HMDHomeInviteLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, nonatomic) BOOL received;
@property (readonly, nonatomic) BOOL filtered;
@property (readonly, nonatomic) BOOL suppressedNotification;
@property (readonly, nonatomic) BOOL accepted;
@property (readonly, nonatomic) BOOL declined;
@property (readonly, nonatomic) BOOL ignored;
@property (readonly, nonatomic) BOOL expired;
@property (readonly, nonatomic) BOOL isFMFDevice;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateWithInvitationState:(long long)a0 isFMFDevice:(BOOL)a1;
+ (id)updateWithState:(long long)a0 isFMFDevice:(BOOL)a1;

- (id)initWithHomeInviteLogEventState:(long long)a0 isFMFDevice:(BOOL)a1;

@end
