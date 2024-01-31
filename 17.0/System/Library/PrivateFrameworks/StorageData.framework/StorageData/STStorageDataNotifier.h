@class NSMutableDictionary;

@interface STStorageDataNotifier : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _changesLock;
    NSMutableDictionary *_changes;
}

+ (id)sharedNotifier;

- (id)init;
- (void).cxx_destruct;
- (void)notify:(id)a0;
- (void)_notify:(id)a0;
- (void)notify:(id)a0 forBundleIDs:(id)a1;
- (void)postAppsStateChanged:(id)a0;
- (void)postTipsChanged;
- (void)postAppSizesChanged:(id)a0;
- (void)postAppsAdded:(id)a0;
- (void)postAppsRemoved:(id)a0;
- (void)postLoadingComplete;
- (void)postMediaSizesChanged;

@end
