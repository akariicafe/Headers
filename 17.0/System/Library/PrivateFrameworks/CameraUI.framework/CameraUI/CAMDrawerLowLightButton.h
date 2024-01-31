@interface CAMDrawerLowLightButton : CAMControlDrawerCustomButton

@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (BOOL)adjustsImageWhenDisabled;
- (void)setDisabled:(BOOL)a0 animated:(BOOL)a1;
- (id)imageNameForAXHUD;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
