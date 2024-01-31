@interface SBFParallaxSettings : _UISettings

@property BOOL slideEnabled;
@property long long slideDirectionX;
@property long long slideDirectionY;
@property double slidePixelsX;
@property double slidePixelsY;
@property BOOL tiltEnabled;
@property long long tiltDirectionX;
@property long long tiltDirectionY;
@property double tiltDegreesX;
@property double tiltDegreesY;
@property long long distanceFromScreen;
@property BOOL increaseEnabled;
@property double slideIncreaseX;
@property double slideIncreaseY;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
