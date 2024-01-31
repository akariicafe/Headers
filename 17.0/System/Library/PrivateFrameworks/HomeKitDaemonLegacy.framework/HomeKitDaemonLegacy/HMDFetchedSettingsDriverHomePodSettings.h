@class NSString, NSObject;
@protocol HMDHPSSettingsObjectFactoryProtocol, HMDHPSAccessorySettingService, HMDFetchedSettingsDriverDelegate, OS_dispatch_queue;

@interface HMDFetchedSettingsDriverHomePodSettings : NSObject <HMDHPSAccessorySettingServiceDelegate, HMDFetchedSettingsDriver, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<HMDHPSAccessorySettingService> service;
@property (readonly) id<HMDHPSSettingsObjectFactoryProtocol> hmdhpsObjectFactory;
@property (weak) id<HMDFetchedSettingsDriverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)didReconnect;
- (void).cxx_destruct;
- (id)_hpLanguageValueFromLanguageValue:(id)a0;
- (id)_languageValueList;
- (void)_processReadResults:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_readSettingsAtKeyPaths:(id)a0 completion:(id /* block */)a1;
- (id)_transformPreferredMediaUserEvent:(id)a0;
- (id)_transformToImmutableSetting:(id)a0;
- (void)_writeSetting:(id)a0 keyPath:(id)a1 completion:(id /* block */)a2;
- (void)didUpdateSetting:(id)a0 forKeyPath:(id)a1;
- (void)fetchSettingsForKeyPaths:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 settingsObjectFactory:(id)a1;
- (void)languageValueListWithCompletion:(id /* block */)a0;
- (void)serviceDidInitializeForCurrentAccessory:(id)a0;
- (void)startWithKeyPaths:(id)a0 completion:(id /* block */)a1;
- (void)updateSettingWithKeyPath:(id)a0 boolSettingValue:(id)a1 completion:(id /* block */)a2;
- (void)updateSettingWithKeyPath:(id)a0 integerSettingValue:(id)a1 completion:(id /* block */)a2;
- (void)updateSettingWithKeyPath:(id)a0 languageSettingValue:(id)a1 completion:(id /* block */)a2;
- (void)updateSettingWithKeyPath:(id)a0 primaryUserInfo:(id)a1 completion:(id /* block */)a2;

@end
