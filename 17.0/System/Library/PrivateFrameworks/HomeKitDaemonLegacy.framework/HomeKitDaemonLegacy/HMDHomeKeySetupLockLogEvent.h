@class HMFTimer, NSUUID, NSString, NSDictionary;

@interface HMDHomeKeySetupLockLogEvent : HMMLogEvent <HMFTimerDelegate, HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (retain, nonatomic) HMFTimer *timer;
@property (readonly) BOOL success;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly) unsigned long long keyType;
@property long long expectedCount;
@property long long completedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;


@end
