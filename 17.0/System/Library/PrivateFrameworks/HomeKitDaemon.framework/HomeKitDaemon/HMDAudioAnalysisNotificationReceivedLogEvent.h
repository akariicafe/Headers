@class NSString, NSDictionary, NSUUID, NSDate;

@interface HMDAudioAnalysisNotificationReceivedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly) double latency;
@property (readonly) unsigned long long reason;
@property (readonly) unsigned long long state;
@property (readonly, nonatomic) NSDate *notificationSentDate;
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
- (id)initWithReason:(unsigned long long)a0 state:(unsigned long long)a1 notificationSentDate:(id)a2;

@end
