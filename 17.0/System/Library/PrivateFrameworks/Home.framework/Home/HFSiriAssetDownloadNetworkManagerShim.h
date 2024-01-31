@class HFSiriAssetDownloadNetworkManager;

@interface HFSiriAssetDownloadNetworkManagerShim : NSObject

@property (retain, nonatomic) HFSiriAssetDownloadNetworkManager *manager;

+ (void)cleanup;
+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)statusForIdentifier:(id)a0 replyHandler:(id /* block */)a1;
- (unsigned long long)immediateStatusForIdentifier:(id)a0;
- (void)requestStatus:(id)a0;

@end
