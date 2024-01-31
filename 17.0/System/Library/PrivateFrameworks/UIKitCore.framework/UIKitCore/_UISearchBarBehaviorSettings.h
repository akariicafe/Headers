@interface _UISearchBarBehaviorSettings : PTSettings

@property (nonatomic) BOOL useGenerousPadding;
@property (nonatomic) double buttonMinimumHeight;
@property (nonatomic) double buttonTightPadding;
@property (nonatomic) double buttonGenerousPadding;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
