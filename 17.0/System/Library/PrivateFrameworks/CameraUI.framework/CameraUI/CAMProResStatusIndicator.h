@interface CAMProResStatusIndicator : CAMControlStatusIndicator

@property (readonly, nonatomic) long long proResVideoMode;
@property (readonly, nonatomic) long long colorSpace;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)shouldUseOutline;
- (id)imageNameForCurrentState;
- (id)_imageNameForProResVideoModeOff;
- (id)_imageNameForProResVideoModeOn;
- (id)imageNameForAXHUD;
- (void)setProResVideoMode:(long long)a0 colorSpace:(long long)a1 animated:(BOOL)a2;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;

@end
