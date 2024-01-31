@class NSString, NSDictionary, HMDAccessory, NSUUID;

@interface HMDWiFiReconfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (retain, nonatomic) HMDAccessory *accessory;
@property (nonatomic, getter=isUsingFailSafeUpdate) BOOL usingFailSafeUpdate;
@property (nonatomic) long long credentialType;
@property (retain, nonatomic) HMDAccessory *routerAccessory;
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

@end
