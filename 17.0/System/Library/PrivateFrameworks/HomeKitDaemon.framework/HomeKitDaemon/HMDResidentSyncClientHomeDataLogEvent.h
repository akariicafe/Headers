@class NSString, NSDictionary, NSUUID;

@interface HMDResidentSyncClientHomeDataLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly) unsigned long long encodedDataSize;
@property (readonly) long long homeDataType;
@property (readonly) int transportType;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)initWithHomeUUID:(id)a0 encodedDataSize:(unsigned long long)a1 homeDataType:(long long)a2 transportType:(int)a3;

@end
