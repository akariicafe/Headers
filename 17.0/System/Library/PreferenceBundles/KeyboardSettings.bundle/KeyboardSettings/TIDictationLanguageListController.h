@class DictationOfflineStatusObserver, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface TIDictationLanguageListController : PSListController <DictationOfflineStatusObserverDelegate>

@property (copy, nonatomic) NSDictionary *offlineStatusForLanguage;
@property (retain, nonatomic) DictationOfflineStatusObserver *dictaionOfflineStatusObserver;
@property (retain, nonatomic) NSMutableDictionary *assetIdToLanguages;
@property (retain, nonatomic) NSMutableSet *trackingDownloadStatusForAssetsIDs;
@property (retain, nonatomic) NSMutableSet *onDeviceLocalesDownloading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)isSmartLanguageSelectionEnabled;
+ (long long)numberOfEnabledEntries:(id)a0;

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (id)slsDictationLanguagesSpecifiers;
- (id)dictationFooterText;
- (id)dictationLanguagesSpecifiers;
- (void)handleSmartLanguageSelectionOnDictationLanguageToggle:(BOOL)a0 enabledDictationLanguages:(id)a1 specifier:(id)a2;
- (id)isSLSEnabled:(id)a0;
- (void)offlineDictationStatusUpdated:(id)a0;
- (id)onDeviceDictationLanguagesSpecifiers;
- (id)onDeviceNotCapableDictationLanguagesSpecifiers;
- (void)presentPrivacySheet:(id)a0;
- (void)setSLSEnabled:(id)a0 specifier:(id)a1;
- (id)tableView:(id)a0 classicDictationCellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 enhancedDictationCellForRowAtIndexPath:(id)a1;
- (void)toggleDictationLanguage:(id)a0;
- (void)toggleSLSEnabled:(id)a0;
- (void)updateDownloadingProgressForAsset:(id)a0 stalled:(BOOL)a1;
- (void)updateDownloadingStateForAsset:(id)a0 success:(BOOL)a1;

@end
