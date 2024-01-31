@interface VUIMPMediaItemAirTrafficDownloadController : VUIMPMediaItemDownloadController

- (void)dealloc;
- (void)_handleMediaLibraryDidChangeNotification:(id)a0;
- (BOOL)supportsPausing;
- (id)initWithMediaItem:(id)a0 serialProcessingDispatchQueue:(id)a1;
- (id)initWithMediaItem:(id)a0 state:(id)a1 serialProcessingDispatchQueue:(id)a2;
- (BOOL)supportsCancellation;

@end
