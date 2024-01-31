@class PFCameraViewfinderSessionWatcher, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLCacheDeleteRegistration : NSObject <PFCameraViewfinderSessionWatcherDelegate> {
    NSMutableDictionary *_cacheDeleteSupportByLibraryURL;
    NSMutableDictionary *_notificationIDsByLibraryURL;
    NSObject<OS_dispatch_queue> *_queue;
    PFCameraViewfinderSessionWatcher *_cameraWatcher;
    NSMutableDictionary *_fileIDsAndPurgedPathsReceivedWhileCameraIsStreamingPerLibrary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerSpecialCaseHandler;
+ (void)registerDefaultHandlers;
+ (id)cacheDeleteUrgencySpecialCasePhotoLibrary;

- (id)init;
- (void)unregisterCacheDeleteSupport:(id)a0 withLibraryServicesManager:(id)a1;
- (void)_registerResourceDirectories;
- (void)cameraWatcherDidChangeState:(id)a0;
- (void)_replaceCameraWatcherWith:(id)a0;
- (void)registerCacheDeleteSupport:(id)a0 withLibraryServicesManager:(id)a1;
- (void).cxx_destruct;
- (void)_setCacheDeleteSupport:(id)a0 forLibrary:(id)a1;
- (void)_processRemovedFiles:(id)a0 withCacheDeleteSupport:(id)a1 forLibraryURL:(id)a2;
- (id)_getInternalQueue;

@end
