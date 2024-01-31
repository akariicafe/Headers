@class PRSExternalSystemService, PRSService;

@interface MDMWallpaperUtilities : NSObject

@property (retain, nonatomic) PRSService *posterService;
@property (retain, nonatomic) PRSExternalSystemService *externalPosterService;

- (void).cxx_destruct;
- (void)_createNewConfigurationIfNeeedWithCompletionHandler:(id /* block */)a0;
- (void)_createNewConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)_removeImageFromURL:(id)a0;
- (void)_setWallpaper:(id)a0 forConfigurationWithUUID:(id)a1 setLockScreen:(BOOL)a2 setHomeScreen:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)_storeImageToTempDirectory:(id)a0;
- (void)_verifyWallpaperConfigExistsWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)setWallpaper:(id)a0 forLockScreen:(BOOL)a1 homeScreen:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
