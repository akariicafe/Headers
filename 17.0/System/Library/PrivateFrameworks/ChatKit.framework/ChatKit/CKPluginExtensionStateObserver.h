@interface CKPluginExtensionStateObserver : NSObject

@property (nonatomic) BOOL passKitUIPresented;
@property (nonatomic) BOOL stickerDragActiveInCurrentProcess;
@property (nonatomic) BOOL iTunesStoreDialogPresented;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_iTunesStoreDialogDidDismiss;
- (void)_iTunesStoreDialogWillDisplay;
- (void)_passKitUIDismissed;
- (void)_passKitUIPresented;
- (void)_stickerDragEnded:(id)a0;
- (void)_stickerDragStarted:(id)a0;
- (void)prepareForResume;

@end
