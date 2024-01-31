@class NSString, NSSet, HFStaticItemProvider, HUCameraSmartDetectionSettingsModule, HUCameraRecordAudioSettingsItem, HUCameraCloudStorageSettingsModule, UIViewController;

@interface HUCameraRecordingOptionsModule : HFItemModule <HUCameraSettingsModule>

@property (readonly, nonatomic) NSSet *cameraProfiles;
@property (retain, nonatomic) NSSet *itemProviders;
@property (retain, nonatomic) HFStaticItemProvider *recordAudioItemProvider;
@property (retain, nonatomic) HUCameraRecordAudioSettingsItem *recordAudioItem;
@property (readonly, nonatomic) HUCameraSmartDetectionSettingsModule *smartDetectionModule;
@property (readonly, nonatomic) HUCameraCloudStorageSettingsModule *cloudStorageModule;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)didSelectItem:(id)a0;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 cameraProfiles:(id)a1;
- (BOOL)isItemHeader:(id)a0;
- (void)updateRecordAudioValue:(BOOL)a0;

@end
