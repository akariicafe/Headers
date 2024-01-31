@interface CAMDrawerLivePhotoButton : CAMControlDrawerMenuButton

@property (nonatomic) long long livePhotoMode;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (void)didSelectMenuItem:(id)a0;
- (id)imageNameForAXHUD;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (void)setLivePhotoMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
