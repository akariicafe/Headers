@class NSString, HMDAccessoryTransportReachabilityReport, NSDictionary, NSUUID, NSNumber;

@interface HMDAccessoryReachabilityChangedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly, nonatomic) BOOL accessoryBatteryPowered;
@property (readonly, nonatomic) BOOL accessoryBridged;
@property (readonly, copy, nonatomic) NSString *accessoryCategory;
@property (readonly, copy, nonatomic) NSString *accessoryFirmwareVersion;
@property (readonly, copy, nonatomic) NSString *accessoryManufacturer;
@property (readonly, copy, nonatomic) NSString *accessoryModel;
@property (readonly, copy, nonatomic) NSNumber *accessoryNumber;
@property (readonly, nonatomic) BOOL batteryLow;
@property (readonly, nonatomic) BOOL changed;
@property (readonly, nonatomic) long long duration;
@property (readonly, nonatomic) BOOL reachable;
@property (readonly, copy, nonatomic) HMDAccessoryTransportReachabilityReport *transportReport;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithReachable:(BOOL)a0 changed:(BOOL)a1 duration:(double)a2 accessory:(id)a3 transportReport:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (id)__initWithReachable:(BOOL)a0 changed:(BOOL)a1 duration:(double)a2 accessory:(id)a3 transportReport:(id)a4;

@end
