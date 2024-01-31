@interface PLPhotoLibraryForceExitObserver : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_photoLibraryCorruptNotification;
- (void)_photoLibraryForceClientExitNotification;

@end
