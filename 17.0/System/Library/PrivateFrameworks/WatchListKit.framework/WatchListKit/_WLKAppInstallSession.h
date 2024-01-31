@class AMSLookupItemOffer, NSString, NSObject;
@protocol OS_dispatch_queue, WLKInstallable;

@interface _WLKAppInstallSession : NSObject <LSApplicationWorkspaceObserverProtocol> {
    id /* block */ _completion;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _progressHandler;
}

@property (readonly, nonatomic) id<WLKInstallable> installable;
@property (readonly, nonatomic) AMSLookupItemOffer *offer;
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_matchingAppProxyFromProxies:(id)a0 forInstallable:(id)a1;

- (void)applicationsDidInstall:(id)a0;
- (void)applicationInstallsDidChange:(id)a0;
- (void)applicationInstallsDidStart:(id)a0;
- (void)dealloc;
- (void)applicationsWillInstall:(id)a0;
- (void).cxx_destruct;
- (void)applicationsDidFailToInstall:(id)a0;
- (void)_doPurchaseWithAppAdamID:(id)a0 offer:(id)a1;
- (BOOL)_canOpenAppWithBundleID:(id)a0;
- (void)_sendCompletionWithError:(id)a0;
- (void)beginInstallationWithProgressHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithInstallable:(id)a0 offer:(id)a1 sceneIdentifier:(id)a2;

@end
