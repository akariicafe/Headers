@class NSDate, SiriTTSDaemonSession, NSArray, AssistantVoiceMetrics, AssistantVoiceViewModel, PSSpecifier, AssistantSettingsSignalEmitter, SUICAssistantVoiceSettingsConnection, AFVoiceInfo, TTSAsset;

@interface AssistantVoiceController : PSListController {
    AssistantSettingsSignalEmitter *_signalEmitter;
}

@property (retain, nonatomic) PSSpecifier *languageGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *languageProto;
@property (retain, nonatomic) NSArray *languageSpecifiers;
@property (retain, nonatomic) PSSpecifier *voiceVariationGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *voiceVariationProto;
@property (retain, nonatomic) NSArray *cellularUpdatesSpecifiers;
@property (retain, nonatomic) TTSAsset *downloadingAsset;
@property (retain, nonatomic) NSArray *voiceVariationSpecifiers;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) AFVoiceInfo *inProgressVoice;
@property (retain, nonatomic) AFVoiceInfo *currentVoice;
@property (nonatomic) BOOL ignoreNextVoiceChangeNotification;
@property (retain, nonatomic) AssistantVoiceViewModel *currentViewModel;
@property (retain, nonatomic) AssistantVoiceMetrics *metrics;
@property (retain, nonatomic) SiriTTSDaemonSession *session;
@property (retain, nonatomic) SUICAssistantVoiceSettingsConnection *settingsConnection;

+ (id)bundle;
+ (BOOL)asset:(id)a0 matchesVoice:(id)a1;

- (id)outputVoice;
- (id)init;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)resetMetrics;
- (id)specifiers;
- (void).cxx_destruct;
- (void)setParentController:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)inProgressOutputVoice;
- (void)updateDownloadProgress:(float)a0;
- (id)_languageSpecifiersForLanguage:(id)a0;
- (void)applyViewModel:(id)a0;
- (id)dialectsForLanguageIdentifiers:(id)a0;
- (void)stopAllDownload;
- (void)_signalDidSelectVoice;
- (id)_voiceVariationSpecifiersForLanguage:(id)a0;
- (id)deriveVoicesWithTargetVoice:(id)a0 currentVoice:(id)a1;
- (void)downloadVoice:(id)a0;
- (void)grantCellularDataPermissionForVoice:(id)a0;
- (BOOL)isCellularDataPermissionAllowedForVoice:(id)a0;
- (BOOL)isVoiceInstalled:(id)a0;
- (void)languageCodeDidChange:(id)a0;
- (void)outputVoiceDidChange:(id)a0;
- (void)playVoicePreview:(id)a0;
- (void)presentVoiceDownloadConfirmationNoWifiAlertForVoice:(id)a0 inProgressVoice:(id)a1;
- (void)presentVoiceDownloadDisabledNoInternetAlert;
- (void)presentVoiceDownloadDisabledNoWifiAlert;
- (void)selectVoice:(id)a0 inProgressVoice:(id)a1;
- (void)setAssistantInProgressVoice:(id)a0;
- (void)setAssistantOutputVoice:(id)a0;
- (void)setInProgressVoicePreference:(id)a0;
- (void)setOutputVoicePreference:(id)a0;
- (void)updateFooterText:(id)a0 forSpecifier:(id)a1;
- (void)updateVoiceVariationGroupUI:(id)a0;
- (id)viewModelWithInProgressVoice:(id)a0 currentVoice:(id)a1;
- (id)voiceSettingsForLanguageCode:(id)a0 name:(id)a1 gender:(long long)a2;

@end
