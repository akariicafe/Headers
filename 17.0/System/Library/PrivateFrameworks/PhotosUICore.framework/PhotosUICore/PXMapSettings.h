@interface PXMapSettings : PXSettings

@property (nonatomic) BOOL enableCuratedPlacesAlbumSnapshot;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
