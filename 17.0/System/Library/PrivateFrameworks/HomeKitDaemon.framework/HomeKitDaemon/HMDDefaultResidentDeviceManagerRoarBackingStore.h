@class NSString, NSMapTable, HMDHome, HMDAppleAccountManager, NSObject;
@protocol OS_os_log;

@interface HMDDefaultResidentDeviceManagerRoarBackingStore : NSObject <HMFLogging, HMDResidentDeviceManagerRoarBackingStore> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _hasAnyResident;
    NSObject<OS_os_log> *_logger;
}

@property (readonly, weak) HMDHome *home;
@property (readonly, weak) HMDAppleAccountManager *appleAccountManager;
@property (readonly) NSString *logIdentifier;
@property (readonly) NSMapTable *residentDeviceByObjectID;
@property (nonatomic) BOOL hasAnyResident;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *cloudChangeUpdateNotificationName;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_deviceFromModel:(id)a0 currentDevice:(id)a1;
- (void)updateReachabilityForResidents:(id)a0;
- (BOOL)_addDeviceIdentifiersIfNecessary:(id)a0 fromResidentDevice:(id)a1;
- (id)_deviceFromModel:(id)a0;
- (id)_deviceWithIdsDestination:(id)a0 fromAccount:(id)a1;
- (id)_deviceWithIdsIdentifier:(id)a0 fromAccount:(id)a1;
- (void)_mapResidentsToMKFResidents:(id)a0 operation:(id /* block */)a1 finished:(id /* block */)a2;
- (BOOL)_shouldUpdateDeviceIdentifiersForResident:(id)a0 fromResidentDevice:(id)a1;
- (void)_updateHasAnyResident;
- (id)findResidents:(id)a0 outHasResidents:(BOOL *)a1;
- (id)handleCloudResidentChange:(id)a0 currentResidents:(id)a1 isCurrentDevicePrimaryResident:(BOOL)a2 currentDevice:(id)a3;
- (id)initWithHome:(id)a0 appleAccountManager:(id)a1;
- (id)pruneDuplicateResidentModelsFrom:(id)a0;
- (BOOL)residentModel:(id)a0 isTheSameAs:(id)a1;
- (id)residentsRequiringReachabilityUpdate:(id)a0;
- (void)updateIdentifiersForAvailableResidentDevices:(id)a0;

@end
