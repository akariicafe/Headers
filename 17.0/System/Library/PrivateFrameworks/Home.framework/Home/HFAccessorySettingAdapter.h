@class HMHome, HMSettings, HFHomeKitSettingsValueManager, HMAccessory, NSSet, NSMutableDictionary, NSString, HFHomeKitDispatcher;
@protocol HFHomeKitSettingsVendor;

@interface HFAccessorySettingAdapter : NSObject <HFHomeKitSettingsObserver, HFMediaObjectObserver>

@property (retain, nonatomic) HFHomeKitDispatcher *dispatcher;
@property (retain, nonatomic) NSMutableDictionary *watchedSettings;
@property (retain, nonatomic) NSMutableDictionary *keyPathStringToFuture;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFHomeKitSettingsValueManager *valueManager;
@property (readonly, nonatomic) HMSettings *settings;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (readonly, copy, nonatomic) NSSet *keyPaths;
@property (readonly, copy, nonatomic) id /* block */ updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createDefaultHomeSettingAdapterCollectionForProfile:(id)a0;
+ (id)createDefaultHomeSettingAdapterCollectionWithoutMobileTimerAdapterForProfile:(id)a0;

- (id)home;
- (id)init;
- (void).cxx_destruct;
- (void)mediaObject:(id)a0 didUpdateSettings:(id)a1;
- (void)settings:(id)a0 didUpdateForIdentifier:(id)a1 keyPath:(id)a2;
- (void)settingsDidUpdate:(id)a0;
- (id)settingForKeyPath:(id)a0;
- (void)settings:(id)a0 didWriteValueForSettings:(id)a1 failedSettings:(id)a2 homeKitObjectIdentifiers:(id)a3;
- (void)settings:(id)a0 willWriteValueForSettings:(id)a1;
- (void)homeKitSettingWasUpdated:(id)a0 value:(id)a1;
- (id)updateSettingWithKeyPath:(id)a0 value:(id)a1;
- (id)_beginMonitoringSettingsKeyPath:(id)a0;
- (id)_endMonitoringSettingsKeyPath:(id)a0;
- (id)_missingKeyPaths;
- (void)_reportUpdatedValueForSetting:(id)a0;
- (BOOL)_setupKeyPaths;
- (void)_setupMissingKeyPaths;
- (void)_tearDownKeyPaths;
- (void)_teardownSetting:(id)a0;
- (BOOL)_updateRootAccessorySettings;
- (BOOL)_updateRootAccessorySettingsIfNeeded;
- (void)_watchSetting:(id)a0;
- (id)initWithHomeKitSettingsVendor:(id)a0 keyPaths:(id)a1;
- (id)initWithHomeKitSettingsVendor:(id)a0 keyPaths:(id)a1 mode:(unsigned long long)a2 updateHandler:(id /* block */)a3;
- (id)initWithHomeKitSettingsVendor:(id)a0 keyPaths:(id)a1 updateHandler:(id /* block */)a2;
- (id)initWithHomeKitSettingsVendor:(id)a0 keyPaths:(id)a1 updateHandlerBlock:(id /* block */)a2;
- (id)settingWatchFutureForKeyPath:(id)a0;
- (id)updateSetting:(id)a0 value:(id)a1;

@end
