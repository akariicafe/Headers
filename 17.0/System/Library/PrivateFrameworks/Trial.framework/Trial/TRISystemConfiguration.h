@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (id)_sharedSystemInfo;

- (id)osBuild;
- (id)deviceId;
- (id)init;
- (id)aneVersion;
- (id)deviceModelCode;
- (BOOL)setDeviceIdentifier:(id)a0;
- (BOOL)isDiagnosticsAndUsageEnabled;
- (id)deviceClass;
- (id)carrierBundleIdentifier;
- (id)_dispatchQueueForCarrierInfoGathering;
- (int)populationType;
- (BOOL)isBetaBuild;
- (BOOL)isInternalBuild;
- (void).cxx_destruct;
- (BOOL)isAutomatedTestDevice;
- (id)initWithPaths:(id)a0;
- (BOOL)resetDeviceIdentifier;
- (id)enabledInputModeIdentifiers;
- (id)userSettingsRegionCode;
- (id)systemInfo;
- (id)carrierCountryIsoCode;
- (BOOL)hasAne;
- (id)userSettingsLanguageCode;
- (id)osType;
- (BOOL)deleteDeviceIdentifierWithPath:(id)a0;
- (id)createDeviceIdentifierWithPath:(id)a0;
- (id)trialVersionTag;
- (id)_systemInfoWithIsStale:(BOOL *)a0;
- (id)_trialVersion;
- (id)createPersistentDeviceIdentifier;
- (BOOL)deleteDeviceIdentifier;
- (id)deviceInfoForQuestion:(id)a0;
- (BOOL)isBetaUserWithIsStale:(BOOL *)a0;
- (struct { long long x0; long long x1; long long x2; })marketingOSVersion;
- (id)readDeviceIdentifierWithPath:(id)a0;
- (id)reloadDeviceId;
- (id)reloadSystemInfo;
- (BOOL)setDeviceIdentifier:(id)a0 path:(id)a1;
- (id)storedDeviceIdentifier;
- (unsigned long long)trialVersionMajor;
- (unsigned long long)trialVersionMinor;
- (id)userSettingsBCP47DeviceLocale;

@end
