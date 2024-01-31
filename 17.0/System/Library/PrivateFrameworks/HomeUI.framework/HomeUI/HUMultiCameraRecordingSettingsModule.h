@interface HUMultiCameraRecordingSettingsModule : HUCameraRecordingSettingsModule

@property (nonatomic) BOOL shouldShowFooterTitle;

- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 cameraProfiles:(id)a1 displayStyle:(unsigned long long)a2;

@end
