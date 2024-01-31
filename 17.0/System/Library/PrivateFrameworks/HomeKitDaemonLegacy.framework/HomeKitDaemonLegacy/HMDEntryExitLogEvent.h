@class NSString, NSDictionary, NSUUID;

@interface HMDEntryExitLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly) BOOL isEntry;
@property (readonly) BOOL isExit;
@property (readonly) BOOL isFalse;
@property (readonly) double secondsLastFired;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryLogEvent:(double)a0 isFalse:(BOOL)a1;
+ (id)exitLogEvent:(double)a0 isFalse:(BOOL)a1;

- (id)initWithReason:(unsigned long long)a0 isFalse:(BOOL)a1 lastFired:(double)a2;

@end
