@interface CAMDrawerHDRButton : CAMControlDrawerMenuButton

@property (nonatomic) BOOL allowAutoHDR;
@property (nonatomic) BOOL allowHDROn;
@property (nonatomic, setter=setHDRMode:) long long hdrMode;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (void)didSelectMenuItem:(id)a0;
- (id)imageNameForAXHUD;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (void)setHDRMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
