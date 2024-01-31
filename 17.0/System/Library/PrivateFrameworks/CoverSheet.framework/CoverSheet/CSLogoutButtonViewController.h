@class CSVibrantWallpaperButton;
@protocol CSWallpaperColorProvider, CSUserSessionControlling, CSWallpaperProviding;

@interface CSLogoutButtonViewController : CSCoverSheetViewControllerBase

@property (readonly, nonatomic) CSVibrantWallpaperButton *button;
@property (weak, nonatomic) id<CSUserSessionControlling> userSessionController;
@property (weak, nonatomic) id<CSWallpaperColorProvider> wallpaperColorProvider;
@property (weak, nonatomic) id<CSWallpaperProviding> wallpaperProvider;

- (void)loadView;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (void)setWallpaperViewProvider:(id)a0;

@end
