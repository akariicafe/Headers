@interface PXPeopleDetailSettings : PXSettings

@property (nonatomic) BOOL showAnnotateButton;
@property (nonatomic) unsigned long long unverifiedPeopleAnnotationMinimumFaceCount;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
