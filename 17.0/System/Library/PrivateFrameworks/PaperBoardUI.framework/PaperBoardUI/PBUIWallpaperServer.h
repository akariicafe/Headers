@class NSMutableArray, NSString, FBServiceClientAuthenticator, NSObject, BSServiceConnectionListener;
@protocol OS_dispatch_queue, PBUIWallpaperServerDelegate;

@interface PBUIWallpaperServer : NSObject <BSServiceConnectionListenerDelegate, PBUIWallpaperClientToServerInterface> {
    FBServiceClientAuthenticator *_clientAuthenticator;
    NSObject<OS_dispatch_queue> *_queue;
    BSServiceConnectionListener *_connectionListener;
    NSMutableArray *_connections;
}

@property (weak, nonatomic) id<PBUIWallpaperServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_removeConnection:(id)a0;
- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (id)getWallpaperLegibilitySettingsForVariant:(id)a0;
- (void)_queue_addConnection:(id)a0;
- (id)getWallpaperOptionsForVariant:(id)a0;
- (void)removeWallpaperVideo;
- (void)restoreDefaultWallpaper;
- (void)setProceduralWallpaperIdentifier:(id)a0 options:(id)a1 locations:(id)a2;
- (BOOL)setWallpaperColor:(id)a0 darkColor:(id)a1 forLocations:(id)a2;
- (BOOL)setWallpaperGradient:(id)a0 forLocations:(id)a1;
- (BOOL)setWallpaperImage:(id)a0 adjustedImage:(id)a1 thumbnailData:(id)a2 imageHashData:(id)a3 wallpaperOptions:(id)a4 forLocations:(id)a5 currentWallpaperMode:(id)a6;
- (BOOL)setWallpaperWithVideo:(id)a0 sandboxToken:(id)a1 cropRect:(id)a2 wallpaperMode:(id)a3;

@end
