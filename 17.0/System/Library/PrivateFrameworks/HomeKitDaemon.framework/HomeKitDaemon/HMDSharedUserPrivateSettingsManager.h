@class HMDHomeManager, NSString, HMDCoreData, NSMutableDictionary, HMDCoreDataCloudTransform;

@interface HMDSharedUserPrivateSettingsManager : NSObject <HMFLogging, HMDCoreDataCloudChangeListener> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMDCoreData *_coreData;
    HMDCoreDataCloudTransform *_cloudTransform;
    HMDHomeManager *_homeManager;
    NSMutableDictionary *_privateSettingsByHome;
    NSMutableDictionary *_sharedSettingsByHome;
    NSMutableDictionary *_characteristicAuthorizationDataByHomeModelID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)authorizationDataForCharacteristicWithInstanceID:(id)a0 accessoryUUID:(id)a1 homeModelID:(id)a2;
- (void)didInsertOrUpdateModel:(id)a0 changedProperties:(id)a1;
- (id)initWithCoreData:(id)a0 cloudTransform:(id)a1 homeManager:(id)a2;
- (id)settingsForHome:(id)a0 ofType:(long long)a1;
- (id)updateAuthorizationDataForCharacteristicWithInstanceID:(id)a0 accessoryUUID:(id)a1 homeModelID:(id)a2 authorizationData:(id)a3 context:(id)a4;
- (id)updateSettingsForHome:(id)a0 ofType:(long long)a1 withValues:(id)a2 context:(id)a3;
- (void)willStartListeningWithContext:(id)a0;

@end
