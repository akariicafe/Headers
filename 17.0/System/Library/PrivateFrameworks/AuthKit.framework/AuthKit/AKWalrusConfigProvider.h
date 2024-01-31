@class AKWalrusConfig;

@interface AKWalrusConfigProvider : NSObject

@property (readonly, nonatomic) AKWalrusConfig *cachedConfig;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_extractWalrusConfigWithAccountCountry:(id)a0 fromGlobalConfig:(id)a1;
- (void)getWalrusConfigWithCompletion:(id /* block */)a0;

@end
