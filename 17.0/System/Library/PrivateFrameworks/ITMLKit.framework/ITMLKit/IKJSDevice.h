@class NSString, NSNumber;
@protocol IKAppDeviceConfig;

@interface IKJSDevice : IKJSObject <NSObject, IKJSDevice, _IKJSDeviceProxy, _IKJSDevice> {
    id _networkPropertiesChangedToken;
}

@property (weak, nonatomic) id<IKAppDeviceConfig> deviceConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *vendorIdentifier;
@property (readonly, nonatomic) NSString *appVersion;
@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isInAirplaneMode;
@property (readonly, nonatomic) NSString *networkType;
@property (readonly, nonatomic) double lastNetworkChangedTime;
@property (readonly, nonatomic) BOOL isInRetailDemoMode;
@property (readonly, nonatomic) BOOL isSeedBuild;
@property (readonly, nonatomic) NSString *vendorID;
@property (readonly, nonatomic) NSNumber *pixelRatio;
@property (readonly, nonatomic) BOOL runningAnInternalBuild;
@property (readonly, nonatomic) NSString *osBuildNumber;

+ (id)getMobileGestaltString:(struct __CFString { } *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)asPrivateIKJSDevice;
- (id)capacity:(id)a0;
- (id)initWithAppContext:(id)a0 deviceConfig:(id)a1;

@end
