@interface _UIButtonBehaviorSettings : PTSettings

@property (nonatomic) double textButtonOutsetLeading;
@property (nonatomic) double textButtonOutsetTrailing;
@property (nonatomic) double textButtonOutsetTop;
@property (nonatomic) double textButtonOutsetBottom;
@property (nonatomic) double textButtonMinWidth;
@property (nonatomic) double textButtonMinHeight;
@property (nonatomic) double imageButtonOutsetLeading;
@property (nonatomic) double imageButtonOutsetTrailing;
@property (nonatomic) double imageButtonOutsetTop;
@property (nonatomic) double imageButtonOutsetBottom;
@property (nonatomic) double imageButtonMinWidth;
@property (nonatomic) double imageButtonMinHeight;
@property (nonatomic) double mixedButtonOutsetLeading;
@property (nonatomic) double mixedButtonOutsetTrailing;
@property (nonatomic) double mixedButtonOutsetTop;
@property (nonatomic) double mixedButtonOutsetBottom;
@property (nonatomic) double mixedButtonMinWidth;
@property (nonatomic) double mixedButtonMinHeight;
@property (nonatomic) double roundButtonOutset;
@property (nonatomic) double roundButtonMinSize;
@property (nonatomic) double closeButtonOutset;
@property (nonatomic) double closeButtonMinSize;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (BOOL)_useImageSettings;
- (BOOL)_useMixedSettings;
- (BOOL)_useTextSettings;

@end
