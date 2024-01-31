@class NSDictionary, NSOrderedSet, NSString;

@interface SBPlatformController : NSObject {
    NSDictionary *_defaultIconState;
    NSOrderedSet *_defaultIconStateDisplayIdentifiers;
    NSString *_localizedDeviceName;
    BOOL _internalInstall;
    BOOL _carrierInstall;
    long long _medusaCapabilities;
}

+ (id)sharedInstance;

- (BOOL)isInternalInstall;
- (id)defaultIconState;
- (id)hardwareModel;
- (id)productType;
- (id)systemBuildVersion;
- (BOOL)isRoundCornerPad;
- (id)init;
- (BOOL)isCarrierInstall;
- (id)deviceClass;
- (BOOL)isiPadMini;
- (BOOL)isHomeGestureEnabled;
- (BOOL)isMedusaCapable;
- (BOOL)prefersAlwaysOnOrientation;
- (id)defaultIconStateDisplayIdentifiers;
- (void).cxx_destruct;
- (long long)medusaCapabilities;
- (id)localizedPlatformName;
- (BOOL)isRoundCornerPhone;
- (id)uniqueDeviceIdentifier;
- (void)_loadDefaultIconInfo;

@end
