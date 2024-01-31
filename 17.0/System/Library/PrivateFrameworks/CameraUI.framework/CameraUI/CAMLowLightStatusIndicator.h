@interface CAMLowLightStatusIndicator : CAMControlStatusIndicator

@property (nonatomic) double duration;
@property (nonatomic) long long lowLightMode;
@property (nonatomic, getter=isLowLightDisabled) BOOL lowLightDisabled;

- (id)imageNameForCurrentState;
- (id)valueText;
- (BOOL)canShowValue;
- (id)imageNameForAXHUD;
- (void)setLowLightDisabled:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldFillOutlineForCurrentState;
- (BOOL)shouldShowOutlineForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
