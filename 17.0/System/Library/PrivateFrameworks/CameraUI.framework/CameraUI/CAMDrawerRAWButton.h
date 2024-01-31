@interface CAMDrawerRAWButton : CAMControlDrawerMenuButton

@property (nonatomic, setter=setRAWMode:) long long rawMode;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (void)didSelectMenuItem:(id)a0;
- (id)imageNameForAXHUD;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (void)setRAWMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;

@end
