@interface SBCenterWindowSizingSettings : PTSettings

@property (nonatomic) BOOL useCustomSizingForNewWindows;
@property (nonatomic) double fullWidthScaleFactor;
@property (nonatomic) double fullHeightScaleFactor;
@property (nonatomic) double topInset;
@property (nonatomic) double bottomInset;
@property (nonatomic) double leftInset;
@property (nonatomic) double rightInset;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
