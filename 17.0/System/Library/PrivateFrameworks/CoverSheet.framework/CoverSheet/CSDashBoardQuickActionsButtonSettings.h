@interface CSDashBoardQuickActionsButtonSettings : PTSettings

@property (nonatomic) BOOL showsButtons;
@property (nonatomic) BOOL colorsBackground;
@property (nonatomic) double topOutset;
@property (nonatomic) double leadingOutset;
@property (nonatomic) double trailingOutset;
@property (nonatomic) double bottomOutset;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
