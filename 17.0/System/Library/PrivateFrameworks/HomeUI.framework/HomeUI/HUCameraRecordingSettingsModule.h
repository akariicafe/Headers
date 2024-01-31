@class UIViewController, NSSet, HULocationDeviceManager, NSString, HUCameraPresenceRecordingSettingsModule, HUCameraRecordingOptionsItem, NSArray;
@protocol HUCameraRecordingSettingsModuleDelegate;

@interface HUCameraRecordingSettingsModule : HUExpandableItemContainerModule <HUCameraSettingsModule>

@property (retain, nonatomic) HUCameraPresenceRecordingSettingsModule *whenHomeSectionModule;
@property (retain, nonatomic) HUCameraPresenceRecordingSettingsModule *whenAwaySectionModule;
@property (retain, nonatomic) NSSet *itemProviders;
@property (retain, nonatomic) HULocationDeviceManager *locationDeviceManager;
@property (retain, nonatomic) NSString *locationDeviceName;
@property (weak, nonatomic) id<HUCameraRecordingSettingsModuleDelegate> delegate;
@property (readonly, nonatomic) NSSet *cameraProfiles;
@property (readonly, nonatomic) unsigned long long awayAccessModeSetting;
@property (readonly, nonatomic) unsigned long long presentAccessModeSetting;
@property (readonly, nonatomic) HUCameraRecordingOptionsItem *recordingOptionsItem;
@property (readonly, nonatomic) NSArray *presenceModules;
@property (readonly, nonatomic) NSString *longestCameraUsageOptionItemTitle;
@property (readonly, nonatomic) NSString *longestCameraPresenceItemTitle;
@property (readonly, nonatomic) NSArray *cameraPresenceItems;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)didSelectItem:(id)a0;
- (id)_attributedFooterTitle;
- (void)_buildItemProviders;
- (id)_expandingSectionModuleForPresenceType:(unsigned long long)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)expandableModules;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 cameraProfiles:(id)a1 displayStyle:(unsigned long long)a2;
- (BOOL)isItemHeader:(id)a0;

@end
