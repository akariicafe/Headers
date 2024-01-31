@class NSString, NSXPCConnection, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface TIImageCacheClient : NSObject {
    NSString *_path;
    NSString *_imagePath;
    BOOL _hasLocalAccess;
    int _remoteQueryCount;
    BOOL _shouldIdleWhenDone;
    NSCache *_cache;
    NSString *_versionPath;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
    NSObject<OS_dispatch_queue> *_storeImageQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSXPCConnection *_connection;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storeImageQueue;
@property (readonly, nonatomic) int cacheVersion;
@property (nonatomic) BOOL lockOnRead;
@property (nonatomic) unsigned long long cacheItemLimit;

- (void)purge;
- (id)_versionPath;
- (BOOL)imageExistsForKey:(id)a0 inGroup:(id)a1;
- (id)imagePath;
- (void)_createConnectionIfNecessary;
- (void)dealloc;
- (void)purgeMemoryCache;
- (void)storeImageDataForKey:(id)a0 inGroup:(id)a1 item:(id)a2;
- (void)_localStoreImageForKey:(id)a0 inGroup:(id)a1 withItem:(id)a2;
- (struct _img { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; unsigned char x5[4]; })_imgForItem:(id)a0;
- (void)removeImagesInGroups:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_setCacheVersion:(int)a0;
- (int)_cacheVersion;
- (id)initWithLocalAccess:(BOOL)a0;
- (void)setIdleWhenDone;
- (void *)openAndMmap:(id)a0 withInfo:(struct _img { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; unsigned char x5[4]; } *)a1;
- (void)idleAfter:(double)a0;
- (void)_idleIfNecessary:(BOOL)a0;
- (unsigned long long)imageCount;
- (void)_remoteStoreImageForKey:(id)a0 inGroup:(id)a1 withItem:(id)a2;
- (struct CGImage { } *)copyImageForKey:(id)a0 inGroup:(id)a1;

@end
