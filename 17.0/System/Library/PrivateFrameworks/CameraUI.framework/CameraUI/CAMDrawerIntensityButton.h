@interface CAMDrawerIntensityButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;

@end
