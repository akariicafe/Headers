@class NSString, NSDictionary, NSUUID, NSData;

@interface HMDAccessoryCategoryLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging, HMDLogEventFilterSpecifying>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly) unsigned long long accessoryDetailsType;
@property (readonly, nonatomic) NSString *accessoryCategoryIdentifier;
@property (readonly) BOOL isDenominatorSpecifying;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL enableEventFilterSpecifying;
@property (readonly, nonatomic) NSString *sampledCategory;
@property (readonly, nonatomic) NSUUID *sampledUUID;
@property (readonly, nonatomic) NSData *sampledData;

- (void).cxx_destruct;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)initWithAccessoryDetailsType:(unsigned long long)a0 accessoryCategoryIdentifier:(id)a1 homeUUID:(id)a2;

@end
