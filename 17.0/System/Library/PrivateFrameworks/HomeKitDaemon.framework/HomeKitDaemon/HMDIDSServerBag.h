@class HMFTimer, NSString, NSNumber, IDSServerBag, HMDHomeKitVersion;
@protocol HMDIDSServerBagDelegate;

@interface HMDIDSServerBag : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly) IDSServerBag *idsServerBag;
@property (readonly) HMFTimer *refreshTimer;
@property (readonly, copy) NSString *keySuffix;
@property (getter=isHH2SoftwareReleased) BOOL hh2SoftwareReleased;
@property (getter=isHH2ManualMigrationEnabled) BOOL hh2ManualMigrationEnabled;
@property (getter=isHH2AutoMigrationEnabled) BOOL hh2AutoMigrationEnabled;
@property (retain) HMDHomeKitVersion *minimumHomeKitVersionForSharedUserHH2MigrationByOwnerManual;
@property (retain) HMDHomeKitVersion *minimumHomeKitVersionForSharedUserHH2MigrationByOwnerAuto;
@property (retain) HMDHomeKitVersion *minimumHomeKitVersionForOwnerMeDeviceAutoHH2MigrationWithoutSharedUsers;
@property (retain) HMDHomeKitVersion *minimumHomeKitVersionForOwnerOtherDevicesAutoHH2MigrationWithoutSharedUsers;
@property (retain) HMDHomeKitVersion *minimumHomeKitVersionForOwnerResidentDevicesAutoHH2MigrationWithoutSharedUsers;
@property (retain) HMDHomeKitVersion *minimumHomeKitVersionForOwnerMeDeviceAutoHH2MigrationWithSharedUsers;
@property (retain) HMDHomeKitVersion *minimumHomeKitVersionForOwnerOtherDevicesAutoHH2MigrationWithSharedUsers;
@property (retain) HMDHomeKitVersion *minimumHomeKitVersionForOwnerResidentDevicesAutoHH2MigrationWithSharedUsers;
@property BOOL hh2SuppressDuplicateUserModelBulletins;
@property BOOL homeSafetySecurityEnabled;
@property (retain) NSNumber *hh2AutoMigrationWithoutSharedUserRampDivisor;
@property (retain) NSNumber *hh2AutoMigrationWithoutSharedUserRampRemainder;
@property (retain) NSNumber *hh2AutoMigrationWithSharedUserRampDivisor;
@property (retain) NSNumber *hh2AutoMigrationWithSharedUserRampRemainder;
@property (weak) id<HMDIDSServerBagDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)timerDidFire:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIDSServerBag:(id)a0 refreshTimer:(id)a1 keySuffix:(id)a2;

@end
