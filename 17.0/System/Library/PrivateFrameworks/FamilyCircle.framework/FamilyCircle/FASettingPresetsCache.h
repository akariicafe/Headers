@class NSString;

@interface FASettingPresetsCache : NSObject <FASettingPresetsCacheProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheQueue;

- (id)load:(id *)a0;
- (id)invalidate;
- (id)_cacheURLWithError:(id *)a0;
- (id)_cacheURL;
- (id)_createCacheFile;
- (id)_fetchData:(id *)a0;
- (id)_cacheDirectoryURLWithError:(id *)a0;
- (id)loadForURL:(id)a0;
- (id)updateWithPresets:(id)a0 requestURL:(id)a1;

@end
