@class NSString, NSArray, NSData, AMSPromise, NSNumber, AMSPhoneNumberContextInfo;

@interface AMSCurrentDeviceInfo : NSObject <AMSDeviceInfo>

@property (nonatomic) long long biometricState;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *compatibleProductType;
@property (readonly, nonatomic) NSString *deviceGUID;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *hardwarePlatform;
@property (readonly, nonatomic) NSString *localIPAddress;
@property (readonly, nonatomic) NSString *macAddress;
@property (readonly, nonatomic) NSData *macAddressData;
@property (readonly, nonatomic) NSString *MLBSerialNumber;
@property (readonly, nonatomic) NSString *modelPartNumber;
@property (readonly, nonatomic) NSString *operatingSystem;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) NSString *regionCode;
@property (readonly, nonatomic) NSString *ROMAddress;
@property (readonly, nonatomic, getter=isRunningInStoreDemoMode) BOOL runningInStoreDemoMode;
@property (readonly, nonatomic) NSString *secureElementID;
@property (readonly, nonatomic) NSNumber *screenScale;
@property (readonly, nonatomic) NSNumber *screenHeight;
@property (readonly, nonatomic) NSNumber *screenWidth;
@property (readonly, nonatomic, getter=isSecureElementAvailable) BOOL secureElementAvailable;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *thinnedAppVariantId;
@property (readonly, nonatomic) NSString *uniqueDeviceId;
@property (readonly, nonatomic) BOOL deviceIsAudioAccessory;
@property (readonly, nonatomic) BOOL deviceIsAppleTV;
@property (readonly, nonatomic) BOOL deviceIsAppleWatch;
@property (readonly, nonatomic) BOOL deviceIsiPad;
@property (readonly, nonatomic) BOOL deviceIsiPhone;
@property (readonly, nonatomic) BOOL deviceIsiPod;
@property (readonly, nonatomic) BOOL deviceIsMac;
@property (readonly, nonatomic) BOOL deviceIsRealityDevice;
@property (readonly, nonatomic) BOOL deviceIsBundle;
@property (readonly, nonatomic) BOOL deviceIsPasscodeProtected;
@property (readonly, nonatomic) NSArray *carrierNames;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) AMSPromise *carrierNamesPromise;
@property (readonly, nonatomic) BOOL deviceIsAppleTVSimulator;
@property (readonly, nonatomic) BOOL deviceIsAppleWatchSimulator;
@property (readonly, nonatomic) BOOL deviceIsiPadSimulator;
@property (readonly, nonatomic) BOOL deviceIsiPhoneSimulator;
@property (readonly, nonatomic) BOOL deviceIsiPodSimulator;
@property (readonly, nonatomic) BOOL deviceIsRealityDeviceSimulator;
@property (readonly, nonatomic) AMSPhoneNumberContextInfo *voicePreferredPhoneNumberContextInfo;
@property (readonly, nonatomic) AMSPromise *voicePreferredPACToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)screenScale;
- (id)productType;
- (id)screenWidth;
- (id)hardwarePlatform;
- (id)screenHeight;
- (id)modelPartNumber;

@end
