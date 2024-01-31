@class NSMutableDictionary, NSConditionLock, NSThread, _QLCacheThread;

@interface QLCacheCleanUpDatabaseThread : NSObject {
    NSConditionLock *_threadLock;
    struct __CFRunLoop { } *_threadRunLoop;
    NSThread *_thread;
}

@property BOOL diskCacheCleanupDone;
@property (retain) _QLCacheThread *cacheThread;
@property (retain) NSMutableDictionary *thumbnailsHit;
@property (readonly, nonatomic) unsigned long long hitToSaveCount;
@property (readonly, nonatomic) int currentMode;
@property (nonatomic) BOOL shouldRemoveThumbnailsForDeletedFiles;

- (void)pause;
- (void)dealloc;
- (void)_writeAndCleanUp;
- (void)_threadMain;
- (BOOL)_updateHitCount;
- (void)stop;
- (void).cxx_destruct;
- (void)startCleanUp;
- (id)initWithCacheThread:(id)a0;
- (void)addHitWithThumbnailData:(id)a0;
- (void)cleanUpForReset;
- (void)_stopWriteAndCleanUpThreadRunLoop;

@end
