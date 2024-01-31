@interface SBHRootFolderSettings : PTSettings

@property (nonatomic, getter=isAdjustableLayoutEnabled) BOOL adjustableLayoutEnabled;
@property (nonatomic) double portraitTopLayoutInset;
@property (nonatomic) double portraitBottomLayoutInset;
@property (nonatomic) double portraitSideLayoutInset;
@property (nonatomic) double landscapeTopLayoutInset;
@property (nonatomic) double landscapeBottomLayoutInset;
@property (nonatomic) double landscapeSideLayoutInset;
@property (nonatomic) double dockAdditionalIconInset;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
