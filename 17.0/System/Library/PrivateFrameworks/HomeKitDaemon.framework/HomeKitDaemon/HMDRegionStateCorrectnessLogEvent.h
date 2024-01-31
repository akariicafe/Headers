@class NSString, NSDictionary, NSUUID;

@interface HMDRegionStateCorrectnessLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly) BOOL firstAccessoryReachable;
@property (readonly) BOOL regionStateAtHome;
@property (readonly) BOOL regionStateNearByHome;
@property (readonly) BOOL regionStateUnknown;
@property (readonly) BOOL isStateCorrect;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateWithFirstAccessory:(long long)a0 nearbyHome:(long long)a1;
+ (id)updateWithRegion:(long long)a0 nearbyHome:(long long)a1 accessoryReachable:(BOOL)a2;

- (id)initWithReason:(unsigned long long)a0 firstAccessoryReachable:(BOOL)a1 regionStateAtHome:(long long)a2 regionStateNearByHome:(long long)a3 isStateCorrect:(BOOL)a4;

@end
