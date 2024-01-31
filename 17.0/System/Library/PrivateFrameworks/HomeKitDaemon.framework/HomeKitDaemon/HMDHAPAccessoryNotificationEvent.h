@class NSString, NSDictionary, NSUUID, HMDCharacteristic, HMDHAPAccessory;

@interface HMDHAPAccessoryNotificationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory;
@property (readonly, weak, nonatomic) HMDCharacteristic *characteristic;
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
- (id)initWithAccessory:(id)a0 characteristic:(id)a1;
- (BOOL)isThreadAccessory:(id)a0;

@end
