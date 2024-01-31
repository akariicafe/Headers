@class NSDictionary, NSString, NSUUID;

@interface HMDErrorAggregationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, nonatomic) NSDictionary *coreAnalyticsSerializedEvent;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createErrorEventForRequestGroup:(id)a0 errorString:(id)a1 errorCount:(id)a2;
+ (id)createSummaryEventForRequestGroup:(id)a0 totalErrorCount:(id)a1 totalEventCount:(id)a2;

- (void).cxx_destruct;
- (id)initWithEventGroupName:(id)a0 errorString:(id)a1 errorCount:(id)a2 eventCount:(id)a3;

@end
