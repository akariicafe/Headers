@interface PSPointerSettings : PTSettings

@property (nonatomic) double materialAlphaDot;
@property (nonatomic) double materialAlphaIBeam;
@property (nonatomic) double materialAlphaSmallItemLight;
@property (nonatomic) double materialAlphaSmallItemDark;
@property (nonatomic) double materialAlphaSmallItemDarkHighContrast;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
