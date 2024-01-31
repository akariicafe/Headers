@class NSString, NSMutableDictionary, NSDictionary, NSUUID, NSNumber;

@interface HMDMatterSoftwareUpdateEndEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (retain, nonatomic) NSMutableDictionary *vendorDetailsForCoreAnalytics;
@property (readonly, nonatomic) NSString *accessoryTransport;
@property (readonly, nonatomic) NSNumber *accessoryProductID;
@property (readonly, nonatomic) NSNumber *accessoryVendorID;
@property (readonly, nonatomic) NSNumber *accessoryFirmwareVersionNumber;
@property (readonly, nonatomic) NSNumber *targetFirmwareVersionNumber;
@property (readonly, nonatomic) BOOL isAutomaticThirdPartyAccessorySoftwareUpdateEnabled;
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
- (id)initWithAccessory:(id)a0 transport:(id)a1 accessorySoftwareVersionNumber:(id)a2 updateSoftwareVersionNumber:(id)a3 error:(id)a4;

@end
