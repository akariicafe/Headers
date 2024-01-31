@interface PXPhotoPickerSettings : PXSettings

@property (nonatomic) BOOL useNavBarAnimatedTransition;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
