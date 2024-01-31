@class NSSet, NAFuture, HFSiriLanguageOption, NSHashTable, NSString;

@interface HFAccessorySettingSiriLanguageAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>

@property (readonly, nonatomic) NSHashTable *observers;
@property (copy, nonatomic) NSSet *availableLanguageOptions;
@property (retain, nonatomic) HFSiriLanguageOption *selectedLanguageOption;
@property (readonly, nonatomic) NAFuture *languageSettingFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)preferredOutputVoiceAccentOptionsForSelectedOption:(id)a0;
- (id)preferredOutputVoiceOptionsForSelectedOption:(id)a0;
- (id)preferredRecognitionLanguageOptionsForSelectedOption:(id)a0;
- (BOOL)shouldShowSettingsEntity:(id)a0;
- (id)updateSelectedLanguageOption:(id)a0;
- (id)updateAvailableLanguageOptions:(id)a0;
- (void)homeKitSettingWasUpdated:(id)a0 value:(id)a1;
- (id)_beginMonitoringSettingsKeyPath:(id)a0;
- (void)_dumpAvailableLanguageOptionsWithReason:(id)a0;
- (id)_reloadLanguagesFromHomeKitNotifyingObservers:(BOOL)a0;
- (id)initWithHomeKitSettingsVendor:(id)a0 keyPaths:(id)a1 mode:(unsigned long long)a2 updateHandler:(id /* block */)a3;
- (id)initWithHomeKitSettingsVendor:(id)a0 keyPaths:(id)a1 updateHandler:(id /* block */)a2;
- (id)initWithHomeKitSettingsVendor:(id)a0 mode:(unsigned long long)a1;

@end
