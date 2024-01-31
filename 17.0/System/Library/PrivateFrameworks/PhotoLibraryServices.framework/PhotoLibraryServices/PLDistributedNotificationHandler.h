@class PLPhotoLibraryBundleController, NSObject;
@protocol OS_dispatch_queue;

@interface PLDistributedNotificationHandler : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (void)_handleNotification:(id)a0;
- (void)_openSystemPhotoLibrary;
- (void).cxx_destruct;
- (void)_handleCloudPhotoNotification;
- (void)registerForNotifications;
- (id)initWithLibraryBundleController:(id)a0;

@end
