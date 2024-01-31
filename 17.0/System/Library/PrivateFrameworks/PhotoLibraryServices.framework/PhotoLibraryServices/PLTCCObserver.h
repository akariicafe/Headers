@class PLPhotoLibraryBundleController, NSObject;
@protocol OS_dispatch_queue;

@interface PLTCCObserver : NSObject {
    NSObject<OS_dispatch_queue> *_observerQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (id)_systemPhotoLibrary;
- (void).cxx_destruct;
- (void)registerAsTCCObserver;
- (id)initWithLibraryBundleController:(id)a0;
- (void)_handleTCCEvent:(unsigned long long)a0 auth_record:(id)a1;

@end
