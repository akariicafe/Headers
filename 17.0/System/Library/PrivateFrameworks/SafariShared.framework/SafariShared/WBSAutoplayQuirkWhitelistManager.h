@class WBSRemotePlistController;

@interface WBSAutoplayQuirkWhitelistManager : NSObject {
    WBSRemotePlistController *_remotePlistController;
}

- (id)init;
- (void)prepareForTermination;
- (void).cxx_destruct;
- (id)initWithBuiltInWhitelistURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5;
- (void)quirksForDomain:(id)a0 completionHandler:(id /* block */)a1;

@end
