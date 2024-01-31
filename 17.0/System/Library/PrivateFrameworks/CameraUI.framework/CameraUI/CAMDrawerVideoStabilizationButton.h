@interface CAMDrawerVideoStabilizationButton : CAMControlDrawerMenuButton

@property (nonatomic, setter=setVideoStabilizationMode:) long long videoStabilizationMode;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (void)didSelectMenuItem:(id)a0;
- (id)imageNameForAXHUD;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (void)setVideoStabilizationMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
