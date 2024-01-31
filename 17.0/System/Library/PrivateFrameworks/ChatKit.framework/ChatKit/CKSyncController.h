@interface CKSyncController : NSObject

@property (nonatomic, getter=isRestoring) BOOL restoring;
@property (nonatomic) int restoreStateChangedToken;
@property (nonatomic) int attachmentRestoredToken;

+ (id)sharedInstance;

- (void)updateRestoreState;
- (id)init;
- (void)attachmentRestored;
- (void)postAttachmentRestored;
- (void)prioritizeAttachmentAtPath:(id)a0;

@end
