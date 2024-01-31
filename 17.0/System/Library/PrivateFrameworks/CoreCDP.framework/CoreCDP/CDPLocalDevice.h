@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject {
    id<CDPLocalDeviceSecretProxy> _localSecretProxy;
}

+ (id)sharedInstance;
+ (BOOL)hasLocalSecret;

- (id)modelVersion;
- (id)osVersion;
- (id)hardwareModel;
- (id)serialNumber;
- (id)init;
- (id)deviceName;
- (id)deviceClass;
- (void).cxx_destruct;
- (BOOL)currentProcessHasEntitlement:(id)a0;
- (BOOL)hasLocalSecret;
- (BOOL)_isHomePod;
- (BOOL)_currentProcessCreatesDaemonTypeProxy;
- (id)marketingModel;
- (BOOL)supportsSecureBackupRecovery;

@end
