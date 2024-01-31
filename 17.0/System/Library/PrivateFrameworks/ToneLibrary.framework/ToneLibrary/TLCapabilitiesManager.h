@class NSString, NSDictionary;

@interface TLCapabilitiesManager : NSObject {
    BOOL _isInternalInstall;
    BOOL _isRingtoneStoreAvailable;
    BOOL _isAlertToneStoreAvailable;
    NSDictionary *_deviceCodeNameSimplicationMapping;
}

@property (class, readonly) TLCapabilitiesManager *sharedCapabilitiesManager;

@property (readonly, nonatomic, getter=isRingtoneStoreAvailable) BOOL ringtoneStoreAvailable;
@property (readonly, nonatomic, getter=isAlertToneStoreAvailable) BOOL alertToneStoreAvailable;
@property (readonly, nonatomic) BOOL wantsModernDefaultRingtone;
@property (readonly, nonatomic) BOOL hasVibratorCapability;
@property (readonly, nonatomic) BOOL hasSynchronizedVibrationsCapability;
@property (readonly, nonatomic) BOOL hasSynchronizedEmbeddedVibrationsCapability;
@property (readonly, nonatomic) BOOL hasUserGeneratedVibrationsCapability;
@property (readonly, nonatomic, getter=isInternalInstall) BOOL internalInstall;
@property (readonly, nonatomic) NSString *deviceCodeName;
@property (readonly, nonatomic) NSString *simplifiedDeviceCodeName;
@property (readonly, nonatomic, getter=isHomePod) BOOL homePod;

- (id)init;
- (BOOL)_hasTelephonyCapability;
- (void)dealloc;
- (void)_checkRingtoneStoreAvailability;
- (void)_updateRingtoneStoreAvailabilityWithAvailableKinds:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)_handleStoreAvailableItemKindsChangedNotification:(id)a0;

@end
