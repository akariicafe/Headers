@class NSUUID, NSString, NSArray, HMLanguageValueListSetting, HMLanguageSetting, HMAccessorySettingGroup, HMAccessorySettingsDataSource, HMAccessorySettingsController, NSObject, HMAccessorySettings, _HMContext;
@protocol HMAccessorySettingsAdapterDelegate, HMAccessorySettingsContainerInternal, OS_dispatch_queue, HMControllable;

@interface HMAccessorySettingsAdapter : NSObject <HMAccessorySettingsDataSourceDelegate>

@property (class, readonly) float constraintSettingScaleFactor;
@property (class, readonly, copy) NSArray *languageKeyPaths;
@property (class, readonly, copy) NSString *selectedLanguageSettingKeyPath;
@property (class, readonly) NSArray *tapAssistanceSelectionTitles;

@property (retain) HMAccessorySettingGroup *rootGroup;
@property (readonly) HMAccessorySettingsDataSource *accessoryDataSource;
@property (readonly) HMAccessorySettingsController *accessorySettingsController;
@property (readonly, copy, nonatomic) NSUUID *homeIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) id<HMAccessorySettingsContainerInternal> settingsContainer;
@property (readonly, weak) id<HMControllable> settingsControl;
@property (retain) HMAccessorySettings *accessorySettings;
@property (readonly) _HMContext *accessoryContext;
@property (retain) HMLanguageValueListSetting *availableLanguageSetting;
@property (retain) HMLanguageSetting *selectedLanguageSetting;
@property (retain) NSArray *tapAssistanceSelections;
@property (readonly, copy, nonatomic) NSUUID *settingsContainerIdentifier;
@property (readonly, nonatomic) long long containerType;
@property BOOL didReceiveFirstUpdateEvent;
@property BOOL settingsReflected;
@property (weak, nonatomic) id<HMAccessorySettingsAdapterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSettings;
+ (id)logCategory;
+ (BOOL)defaultSettingsContainsKeyPath:(id)a0;
+ (BOOL)isKeyPathForBooleanSettingType:(id)a0;
+ (id)availableLanguagesKeyPath;
+ (id)defaultSettingsAllKeyPaths;
+ (id)defaultSettingsConstraintsForKeyPath:(id)a0;
+ (BOOL)isKeyPathForConstrainedNumberSettingType:(id)a0;
+ (BOOL)isKeyPathForTapAssistanceSelectionSettingType:(id)a0;
+ (long long)itemIndexWithTapAssistanceSelectionItem:(id)a0;
+ (id)scaleDownNumberSettingValue:(id)a0;
+ (id)scaleUpNumberSettingValue:(id)a0;
+ (id)tapAssistanceSelectionItemWithIndex:(long long)a0;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)accessorySettingsDataSource:(id)a0 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)a1 settings:(id)a2;
- (BOOL)booleanSettingValueWithKeyPath:(id)a0;
- (void)configureWithCompletionHandler:(id /* block */)a0;
- (id)languageSelectionItemFromValue:(id)a0;
- (BOOL)_addOrUpdateLanguageSetting:(id)a0 availableLanguagesSetting:(id)a1;
- (void)_configureForAccessoryWithCompletionHandler:(id /* block */)a0;
- (void)_configureForMediaSystemWithCompletionHandler:(id /* block */)a0;
- (id)_findSettingInGroupForKeyPath:(id)a0 group:(id)a1;
- (BOOL)_handleLanguageSettingUpdate:(id)a0;
- (id)_transformAccessorySettingToLanguageSetting:(id)a0;
- (id)accessoryLanguageSetting;
- (id)accessoryNumberSettingWithKeyPath:(id)a0;
- (id)accessorySettingWithKeyPath:(id)a0;
- (id)appendKeyPath:(id)a0 withNextKey:(id)a1;
- (id)createKeyPathArrayWithKeyPath:(id)a0;
- (void)createRootSettingGroup;
- (id)createTapAssistanceSelectionSettingFromNumberConstraint:(id)a0 properties:(unsigned long long)a1 value:(id)a2 min:(id)a3 max:(id)a4 step:(id)a5;
- (id)createTapAssistanceSelections;
- (id)findOrAddAccessorySettingGroupWithKeyPath:(id)a0;
- (id)groupKeyArrayFromKeyPath:(id)a0;
- (id)initWithHomeIdentifier:(id)a0 dataSource:(id)a1 controller:(id)a2 workQueue:(id)a3 settingsContainer:(id)a4 containerIdentifier:(id)a5 containerType:(long long)a6 settingsControl:(id)a7 context:(id)a8;
- (BOOL)isValidSelectionItemNumberConstraintValue:(id)a0 min:(id)a1 max:(id)a2 step:(id)a3;
- (id)legacyLanguageSettingFromSelectedSetting:(id)a0 selections:(id)a1 settingsReflected:(BOOL)a2;
- (id)numberSettingValueWithKeyPath:(id)a0;
- (id)settingKeyFromKeyPath:(id)a0;
- (BOOL)settingReflected:(id)a0;
- (id)tapAssistanceSelectionSetting:(id)a0;
- (id)tapAssistanceSelectionSettingValue:(id)a0;
- (id)transformIntegerToSelection:(long long)a0;
- (BOOL)transformSelectionToInteger:(id)a0 integerValue:(long long *)a1;
- (void)unconfigure;
- (BOOL)updateBooleanSettingWithKeyPath:(id)a0 value:(BOOL)a1;
- (BOOL)updateNumberSettingWithKeyPath:(id)a0 value:(id)a1;
- (void)updateSettingsReflected:(BOOL)a0;
- (BOOL)updateTapAssistanceSelectionSettingWithKeyPath:(id)a0 value:(id)a1;
- (void)updateWithKeyPath:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;

@end
