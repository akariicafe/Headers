@class NSString, NSMutableIndexSet, CKDMMCS, NSObject;
@protocol OS_dispatch_queue;

@interface CKDMMCSEngineContext : NSObject {
    NSObject<OS_dispatch_queue> *_mmcsQueue;
    _Atomic unsigned long long _serializedThread;
}

@property (nonatomic) long long refCount;
@property (nonatomic) long long state;
@property (weak, nonatomic) CKDMMCS *MMCS;
@property (nonatomic) struct _mmcs_engine { } *MMCSEngine;
@property (retain, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int maxChunkCountForSection;
@property (retain, nonatomic) NSMutableIndexSet *inMemoryItemsIDs;

+ (BOOL)hasCachedCKDMMCSEngineContextForPath:(id)a0;
+ (id)sharedContextsByPath;
+ (id)_appID;
+ (id)sharedContextsQueue;
+ (BOOL)tearDownMMCSEngineWithContext:(id)a0;
+ (id)setupMMCSEngineWithApplicationBundleID:(id)a0 path:(id)a1 wasCached:(BOOL *)a2 error:(id *)a3;

- (unsigned long long)nextAvailableItemID;
- (void)dealloc;
- (long long)incRefCount;
- (void)MMCSSerializeSyncRecursive:(id /* block */)a0;
- (void)MMCSSerializeAsyncRecursive:(id /* block */)a0;
- (BOOL)_setupMMCSEngineWithError:(id *)a0;
- (BOOL)_setupMMCSEngineWithRetryCount:(unsigned long long)a0 error:(id *)a1;
- (id)CKPropertiesDescription;
- (void)_tearDownMMCSEngine;
- (id)description;
- (void)cancelRequestWithContext:(void *)a0;
- (void)stopTrackingItemID:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)assertMMCSSerialized;
- (void)MMCSRunSerialized:(id /* block */)a0;
- (long long)decRefCount;
- (id)initWithApplicationBundleID:(id)a0 path:(id)a1;

@end
