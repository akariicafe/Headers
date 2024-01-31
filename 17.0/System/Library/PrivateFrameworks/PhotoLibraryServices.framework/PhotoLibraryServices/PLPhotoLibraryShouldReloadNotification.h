@class PLPhotoLibrary;

@interface PLPhotoLibraryShouldReloadNotification : PLChangeNotification {
    PLPhotoLibrary *_photoLibrary;
}

- (id)userInfo;
- (id)object;
- (void).cxx_destruct;
- (id)name;
- (id)initNotificationWithPhotoLibrary:(id)a0;

@end
