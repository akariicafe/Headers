@class NSHashTable, NSString, HMAccessorySettingsDataSource;

@interface HFHomeKitAccessorySettingsDataSource : NSObject <HMAccessorySettingsDataSourceDelegate>

@property (retain, nonatomic) HMAccessorySettingsDataSource *dataSource;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)initWithHomeManager:(id)a0;
- (void).cxx_destruct;
- (void)accessorySettingsDataSource:(id)a0 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)a1 settings:(id)a2;
- (void)addObserver:(id)a0;
- (id)hf_localizedTitleForKeyPath:(id)a0;
- (void)hf_subscribeToAccessorySettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2 options:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)updateSettingValue:(id)a0 forKeyPath:(id)a1 accessoryIdentifier:(id)a2;
- (id)hf_defaultSettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2;
- (void)hf_fetchAccessorySettingsWithHomeIdentifier:(id)a0 accessoryIdentifier:(id)a1 keyPaths:(id)a2 completionHandler:(id /* block */)a3;

@end
