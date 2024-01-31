@class _PASLock, NSString, NSObject;
@protocol OS_dispatch_source;

@interface ATXCacheReader : NSObject {
    _PASLock *_lock;
    NSString *_cacheBasePath;
    NSObject<OS_dispatch_source> *_vnodeSource;
}

- (id)init;
- (void)dealloc;
- (id)initWithCacheBasePath:(id)a0;
- (void)_handleDirChange;
- (id)readCacheFileForConsumerSubtype:(unsigned char)a0;
- (void).cxx_destruct;
- (id)readCacheFileForCachePath:(id)a0;

@end
