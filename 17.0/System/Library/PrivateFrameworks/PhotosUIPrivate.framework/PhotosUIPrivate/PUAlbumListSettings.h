@interface PUAlbumListSettings : PXSettings

@property (nonatomic) BOOL shouldUseEditorialLayout;
@property (nonatomic) BOOL allowNavigationTitleEditing;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
