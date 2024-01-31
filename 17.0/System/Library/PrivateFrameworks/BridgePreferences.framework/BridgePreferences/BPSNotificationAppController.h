@class NSString, NSMutableDictionary, NPSDomainAccessor, PSSpecifier, NSMutableArray, BBSectionInfo;

@interface BPSNotificationAppController : BPSListController

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) BBSectionInfo *bbSectionInfo;
@property (retain, nonatomic) NSMutableArray *notificationApplicationSpecifiers;
@property (retain, nonatomic) NPSDomainAccessor *bbAppsSettings;
@property (readonly, nonatomic) NSMutableArray *notificationSpecifiers;
@property (readonly, nonatomic) BOOL mirrorSettings;
@property (readonly, nonatomic) BOOL showAlerts;
@property (readonly, nonatomic) unsigned long long alertingMode;
@property (readonly, nonatomic) BOOL showPreview;
@property (readonly, nonatomic) NSMutableDictionary *sectionInfo;
@property (readonly, nonatomic) PSSpecifier *previewSwitchSpecifier;
@property (nonatomic) unsigned long long settingsMode;

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)init;
- (id)applicationBundleIdentifier;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)bundle;
- (long long)alertType;
- (id)specifiers;
- (void).cxx_destruct;
- (void)setVibrationValue:(id)a0 forSpecifier:(id)a1;
- (id)vibrationValue:(id)a0;
- (void)_showSettingsNotifications;
- (BOOL)_suppressSendToNotificationCenterOption;
- (id)applicationGroupSpecifiers;
- (id)bulletinBoardSettings;
- (BOOL)caresAboutSubsections;
- (id)customGroupSpecifierForDescription:(id)a0;
- (id)glanceSpecifierForIdentifier:(id)a0;
- (id)localizedMirroringDetailFooter;
- (id)localizedPaneTitle;
- (id)localizedPreviewChoiceTitle;
- (id)localizedPreviewGroupFooter;
- (id)localizedPreviewGroupLabel;
- (void)mirrorSettingsChanged:(BOOL)a0;
- (id)mirroredApplicationGroupSpecifiers;
- (id)notificationGroupTitles;
- (id)notificationGroupValues;
- (id)notificationGroupingValue:(id)a0;
- (void)removeAlertOptions;
- (void)removeMirrorOptions;
- (void)removeNotificationCoalescingOptions;
- (void)removeSendToNotificationCenterOption;
- (id)sectionInfoForBBSectionInfo:(id)a0;
- (void)setAlertingMode:(unsigned long long)a0;
- (void)setMirrorSettings:(BOOL)a0;
- (void)setNotificationGroupingValue:(id)a0 specifier:(id)a1;
- (void)setShowPreviewValue:(id)a0 forSpecifier:(id)a1;
- (void)setSoundsValue:(id)a0 forSpecifier:(id)a1;
- (id)showPreviewValue:(id)a0;
- (id)soundsValue:(id)a0;
- (BOOL)suppressAlertSpecifiers;
- (BOOL)suppressAllMirrorSpecifiers;
- (BOOL)suppressMirrorOption;
- (BOOL)suppressNotificationCoalescingOptions;
- (BOOL)suppressSendToNotificationCenterOption;
- (void)updateSubsections;
- (BOOL)wantsPreviewChoice;
- (BOOL)watchHasCapabilitySendToNotificationCenter;
- (void)writeSectionState;

@end
