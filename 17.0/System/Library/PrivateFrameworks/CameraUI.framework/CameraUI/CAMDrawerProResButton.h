@interface CAMDrawerProResButton : CAMControlDrawerMenuButton

@property (nonatomic, setter=setProResVideoMode:) long long proResVideoMode;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (void)didSelectMenuItem:(id)a0;
- (id)imageNameForAXHUD;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (void)setProResVideoMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseSlash;

@end
