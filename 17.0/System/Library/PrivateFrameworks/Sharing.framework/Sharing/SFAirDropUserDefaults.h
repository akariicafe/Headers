@class NSString;

@interface SFAirDropUserDefaults : NSObject {
    void /* unknown type, empty encoding */ _airDropPrivateContactDiscoveryEnabled;
    void /* unknown type, empty encoding */ _walkAwayEnabled;
    void /* unknown type, empty encoding */ _airDropSystemLevelProgressEnabled;
    void /* unknown type, empty encoding */ _airDropMoveToAppEnabled;
    void /* unknown type, empty encoding */ _askToAirDropEnabled;
    void /* unknown type, empty encoding */ _contactShareAfterAirDropEnabled;
    void /* unknown type, empty encoding */ _boopToActionEnabled;
    void /* unknown type, empty encoding */ _boopToAirDropEnabled;
    void /* unknown type, empty encoding */ _shockwaveEffectEnabled;
    void /* unknown type, empty encoding */ _shockwaveEffectVariant;
    void /* unknown type, empty encoding */ _boopInteractionTypeOverride;
    void /* unknown type, empty encoding */ _shockwaveHapticsPlayerStartsEarly;
    void /* unknown type, empty encoding */ _nearFieldControllerEnabled;
    void /* unknown type, empty encoding */ _finalALPN;
    void /* unknown type, empty encoding */ _browseAllInterfaces;
    void /* unknown type, empty encoding */ _registerAllInterfaces;
    void /* unknown type, empty encoding */ _enabledDemoMode;
    void /* unknown type, empty encoding */ _disableAirDrop;
    void /* unknown type, empty encoding */ _disableTLS;
    void /* unknown type, empty encoding */ _disableAirDropBLEAdvertising;
    void /* unknown type, empty encoding */ _disableAutoAccept;
    void /* unknown type, empty encoding */ _disableExtractMediaFromBundles;
    void /* unknown type, empty encoding */ _disableTransformingPhotosAssetBundlesToFolders;
    void /* unknown type, empty encoding */ _alwaysExchangeContacts;
    void /* unknown type, empty encoding */ _a2aRangingAssumeClose;
    void /* unknown type, empty encoding */ _a2aRangingAssumeFar;
    void /* unknown type, empty encoding */ _quicIdleTimeout;
    void /* unknown type, empty encoding */ _nearFieldSharingEnabled;
    void /* unknown type, empty encoding */ _sensitivePreviewOverride;
    void /* unknown type, empty encoding */ _sensitiveContentOverride;
    void /* unknown type, empty encoding */ _showTransferIdentifierUI;
    void /* unknown type, empty encoding */ _alwaysAutoAccept;
    void /* unknown type, empty encoding */ _overrideReceivedFilesPathiOS;
}

@property (class, nonatomic, readonly) SFAirDropUserDefaults *shared;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL objcPrivateContactDiscoveryEnabled;
@property (nonatomic, readonly) BOOL objcSystemLevelProgressEnabled;
@property (nonatomic, readonly) BOOL objcMoveToAppEnabled;
@property (nonatomic, readonly) BOOL objcAskToAirDropEnabled;
@property (nonatomic) BOOL objcNearFieldSharingEnabled;

- (id)init;
- (void).cxx_destruct;

@end
