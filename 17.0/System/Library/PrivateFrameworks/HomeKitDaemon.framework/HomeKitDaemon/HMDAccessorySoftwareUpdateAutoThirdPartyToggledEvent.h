@class NSString, NSDictionary, NSUUID;

@interface HMDAccessorySoftwareUpdateAutoThirdPartyToggledEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

@property (readonly) BOOL autoThirdPartySoftwareUpdateEnable;
@property (readonly) unsigned long long numHAPAccessories;
@property (readonly) unsigned long long numCameraAccessories;
@property (readonly) unsigned long long numCameraAccessoriesRecordingEnabled;
@property (readonly) unsigned long long numSecurityClassAccessories;
@property (readonly) unsigned long long numCriticalSensorAccessories;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithAutoThirdPartyUpdateEnable:(BOOL)a0 numHAPAccessories:(unsigned long long)a1 numCameraAccessories:(unsigned long long)a2 numCameraAccessoriesRecordingEnabled:(unsigned long long)a3 numSecurityClassAccessories:(unsigned long long)a4 numCriticalSensorAccessories:(unsigned long long)a5;
+ (id)eventWithHome:(id)a0;

- (id)initWithAutoThirdPartyUpdateEnable:(BOOL)a0 numHAPAccessories:(unsigned long long)a1 numCameraAccessories:(unsigned long long)a2 numCameraAccessoriesRecordingEnabled:(unsigned long long)a3 numSecurityClassAccessories:(unsigned long long)a4 numCriticalSensorAccessories:(unsigned long long)a5;

@end
