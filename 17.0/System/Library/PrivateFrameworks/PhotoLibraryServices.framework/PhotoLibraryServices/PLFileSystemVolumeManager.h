@class NSMutableDictionary, NSFileManager, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PLFileSystemVolumeManager : NSObject {
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    NSFileManager *_fileManager;
    NSMutableDictionary *_mountedVolumeURLsByUuid;
    NSMutableDictionary *_registeredFileSystemVolumesByUuid;
    NSMapTable *_mocsByVolume;
}

+ (id)sharedFileSystemVolumeManager;

- (void)_updateMountedVolumeURLs;
- (void)dealloc;
- (id)initSharedVolumeManager;
- (void)unregisterPLFileSystemVolume:(id)a0;
- (void)registerPLFileSystemVolume:(id)a0;
- (void)_updateOfflineStates;
- (void).cxx_destruct;
- (id)volumeForURL:(id)a0 context:(id)a1;

@end
