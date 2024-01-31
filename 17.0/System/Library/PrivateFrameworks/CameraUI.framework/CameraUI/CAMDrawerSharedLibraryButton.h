@interface CAMDrawerSharedLibraryButton : CAMControlDrawerMenuButton

@property (nonatomic, setter=setSharedLibraryMode:) long long sharedLibraryMode;

- (long long)controlType;
- (id)imageNameForCurrentState;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (void)setSharedLibraryMode:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;

@end
