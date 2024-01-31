@class NSSet, NSString, HFItemProvider, UIViewController;

@interface HUCameraCloudStorageSettingsModule : HFItemModule <HUCameraSettingsModule> {
    NSSet *_itemProviders;
}

@property (readonly, nonatomic) NSSet *cameraProfiles;
@property (readonly, nonatomic) HFItemProvider *cloudStorageSectionSettingsItemProvider;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)didSelectItem:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 cameraProfiles:(id)a1;
- (BOOL)isItemHeader:(id)a0;
- (id)removeAllCameraRecordings;

@end
