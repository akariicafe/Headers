@class NSUUID, NSHashTable, HFSiriLanguageOption, HMHome, NSSet, NSString, HMAccessorySettingsController, NAFuture;

@interface HFSiriLanguageOptionsManager : NSObject <HFHomeKitAccessorySettingsDataSourceDelegate, HFAccessorySettingsManagerProtocol, HFAccessorySettingAdapterDisplayArbitrating>

@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSUUID *accessoryIdentifier;
@property (retain, nonatomic) HMAccessorySettingsController *settingsController;
@property (copy, nonatomic) NSSet *availableLanguageOptions;
@property (retain, nonatomic) HFSiriLanguageOption *selectedLanguageOption;
@property (retain, nonatomic) NAFuture *availableLanguagesFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)availableSiriLanguageOptions;
- (void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)a0 settings:(id)a1;
- (id)initWithSettingsController:(id)a0 sourceItem:(id)a1 home:(id)a2;
- (id)preferredOutputVoiceAccentOptionsForSelectedOption;
- (id)preferredOutputVoiceOptionsForSelectedOption;
- (id)preferredRecognitionLanguageOptionsForSelectedOption;
- (BOOL)shouldShowSettingsEntity:(id)a0;
- (id)updateSelectedLanguageOption:(id)a0;
- (id)updateSelectedLanguageOption:(id)a0 accessoryIdentifier:(id)a1;
- (void)_fetchAvailableLanguagesAndGenerateOptions;
- (id)_settingKeyPaths;
- (void)_subscribeToSiriLanguageSettings;
- (void)_updateSettingsAndNotifyObservers:(id)a0;
- (id)initWithSettingsController:(id)a0 accessoryIdentifier:(id)a1 home:(id)a2;

@end
