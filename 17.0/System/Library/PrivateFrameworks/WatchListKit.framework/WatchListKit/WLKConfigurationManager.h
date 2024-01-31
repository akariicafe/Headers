@class WLKServerConfigurationResponse, WLKSharedFileStorage, NSObject;
@protocol OS_dispatch_queue;

@interface WLKConfigurationManager : NSObject {
    NSObject<OS_dispatch_queue> *_fetchQueue;
    WLKServerConfigurationResponse *_config;
    WLKSharedFileStorage *_fileCache;
}

@property (nonatomic) double extendedCacheExpireDuration;

+ (id)sharedInstance;

- (id)_stringForCachePolicy:(unsigned long long)a0;
- (id)init;
- (void)_invalidateCache;
- (id)_init;
- (id)_configuration;
- (void).cxx_destruct;
- (id)_config;
- (id)_configurationWithOptions:(long long)a0 cachePolicy:(unsigned long long)a1 queryParameters:(id)a2;
- (void)_fetchConfigurationWithOptions:(long long)a0 cachePolicy:(unsigned long long)a1 queryParameters:(id)a2 completion:(id /* block */)a3;
- (void)_handleLibraryDidChangeNotification:(id)a0;
- (void)_invalidateNetworkCache;
- (void)_setConfig:(id)a0;
- (void)_setUtsk:(id)a0;
- (id)_utsk;
- (void)fetchConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)fetchConfigurationWithOptions:(long long)a0 cachePolicy:(unsigned long long)a1 queryParameters:(id)a2 completion:(id /* block */)a3;

@end
