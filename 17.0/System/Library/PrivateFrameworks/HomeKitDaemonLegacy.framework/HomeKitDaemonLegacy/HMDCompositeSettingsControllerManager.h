@class NSString, NSMapTable, NSArray, HMDCompositeSettingsOwnerToDatabaseAdapterRegistry, NSObject;
@protocol OS_dispatch_queue, HMDCompositeSettingsControllerManagerDataSource, HMMLogEventSubmitting, HMDCompositeSettingControllerManagerStateManager;

@interface HMDCompositeSettingsControllerManager : NSObject <HMDAccessorySettingsLocalMessageHandlerDelegate, HMFLogging, HMDCompositeSettingsControllerDelegate, HMDCompositeSettingControllerManagerStateTransitionDelegate, HMDCompositeSettingControllerManagerStateManagerDataSource> {
    HMDCompositeSettingsOwnerToDatabaseAdapterRegistry *_registry;
    NSObject<OS_dispatch_queue> *_workQueue;
    id /* block */ _compositeSettingsControllerFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) id<HMMLogEventSubmitting> logEventDispatcher;
@property (readonly, copy) NSMapTable *stringToCompositeSettingsController;
@property (readonly) id<HMDCompositeSettingControllerManagerStateManager> stateManager;
@property (readonly, weak) id<HMDCompositeSettingsControllerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *homes;

+ (id)logCategory;
+ (id)immutableSettingFromFetchReturn:(id)a0;
+ (id)zoneNameForHomeUUID:(id)a0;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)removeHomeZone:(id)a0;
- (void)_createSettingControllerForAccessory:(id)a0 homeUUID:(id)a1;
- (void)accessorySettingsLocalMessageHandler:(id)a0 didReceiveFetchRequestMessage:(id)a1 withHomeUUID:(id)a2 accessoryUUID:(id)a3 keyPaths:(id)a4 callerVersion:(id)a5 callerPrivilege:(unsigned long long)a6 siriAvailableLanguagesSetting:(id)a7;
- (void)accessorySettingsLocalMessageHandler:(id)a0 didReceiveUpdateRequestMessage:(id)a1 withHomeUUID:(id)a2 accessoryUUID:(id)a3 keyPath:(id)a4 value:(id)a5 callerVersion:(id)a6;
- (void)applyOnboardingSelections:(id)a0 accessoryUUID:(id)a1 homeUUID:(id)a2 completion:(id /* block */)a3;
- (void)didConfigureCompositeSettingsControllerForHomeUUID:(id)a0 accessoryUUID:(id)a1;
- (void)didUpdateCurrentRunState:(long long)a0 updatedState:(long long)a1 forHome:(id)a2;
- (void)didUpdateSiriEndpointSettingForHomeUUID:(id)a0 accessoryUUID:(id)a1;
- (id)dumpStateInfo;
- (id)initWithDataSource:(id)a0 registry:(id)a1 controllerFactory:(id /* block */)a2 stateManagerFactory:(id /* block */)a3 logEventDispatcher:(id)a4;
- (void)languagesDidChangeForHome:(id)a0;
- (void)localFetchSettingsForUUID:(id)a0 homeUUID:(id)a1 withKeyPaths:(id)a2 callerVersion:(id)a3 callerPrivilege:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)localFetchSettingsForUUID:(id)a0 homeUUID:(id)a1 withKeyPaths:(id)a2 completion:(id /* block */)a3;
- (void)localUpdateSettingForUUID:(id)a0 homeUUID:(id)a1 keyPath:(id)a2 value:(id)a3 callerVersion:(id)a4 completion:(id /* block */)a5;
- (void)localUpdateSettingForUUID:(id)a0 homeUUID:(id)a1 keyPath:(id)a2 value:(id)a3 completion:(id /* block */)a4;
- (void)settingsController:(id)a0 didUpdateSettings:(id)a1 metadata:(id)a2;

@end
