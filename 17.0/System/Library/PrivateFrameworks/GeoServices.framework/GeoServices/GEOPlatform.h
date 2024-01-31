@class NSObject;
@protocol OS_dispatch_queue;

@interface GEOPlatform : NSObject {
    struct __CTServerConnection { } *_telephonyServerConnection;
    NSObject<OS_dispatch_queue> *_coreTelephonyIsolationQueue;
}

+ (BOOL)isRunningInGeod;
+ (void)setIsRunningInGeod:(BOOL)a0;
+ (BOOL)isRunningInGeoAPd;
+ (void)setIsRunningInGeoAPd:(BOOL)a0;
+ (id)sharedPlatform;

- (id)productName;
- (BOOL)isInternalInstall;
- (id)hardwareIdentifier;
- (id)osVersion;
- (id)hardwareModel;
- (BOOL)isMacSetupUser;
- (id)buildVersion;
- (id)osAndBuildVersion;
- (id)init;
- (id)deviceCountrySKU;
- (BOOL)supportsNavigation;
- (BOOL)supportsAdvancedMap;
- (BOOL)mapsFeatureFreedomEnabled;
- (BOOL)supportsRealisticTiles;
- (id)deviceCountrySKUForServiceRequests;
- (BOOL)supportsMultiUser;
- (double)deviceScreenScale;
- (BOOL)supportsASTC;
- (BOOL)supportsForceTouch;
- (void).cxx_destruct;
- (id)hardwareClass;
- (long long)deviceScreenHeightInPixels;
- (id)clientCapabilities;
- (long long)deviceScreenWidthInPixels;
- (BOOL)isCellDataPossible;

@end
