@class NSString;

@interface ATXCacheReaderGuardedData : NSObject {
    NSString *_cachePath;
    int _cacheFileDescriptor;
}

- (id)init;
- (void).cxx_destruct;

@end
