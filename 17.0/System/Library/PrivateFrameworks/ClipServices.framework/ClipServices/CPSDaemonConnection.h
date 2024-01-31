@class NSString, NSXPCConnection, NSObject, CPSSessionProxy;
@protocol OS_dispatch_queue;

@interface CPSDaemonConnection : NSObject <CPSSessionObserving> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (class, readonly, nonatomic) CPSDaemonConnection *sharedConnection;

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSXPCConnection *xpcConnectionNotEntitled;
@property (retain, nonatomic) CPSSessionProxy *sessionProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)stopStallingCurrentInstallationWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)notifyWebClipActivationWithBundleID:(id)a0 referrerBundleID:(id)a1;
- (void)checkAndConsumeShowsAppAttributionBannerForBundleID:(id)a0 completion:(id /* block */)a1;
- (void)cancelPrewarmingClipWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)confirmLocationWithURL:(id)a0 inRegion:(id)a1 completion:(id /* block */)a2;
- (void)didDetermineAvailability:(BOOL)a0 options:(id)a1;
- (void)didFinishLoadingWithError:(id)a0;
- (void)didFinishTestingAtTime:(double)a0;
- (void)didInstallApplicationPlaceholder;
- (void)didRetrieveApplicationIcon:(id)a0;
- (void)didRetrieveBusinessIcon:(id)a0;
- (void)didRetrieveHeroImage:(id)a0;
- (void)didUpdateInstallProgress:(id)a0;
- (void)didUpdateMetadata:(id)a0;
- (void)fetchABRMetadataForDiagnosticsWithURL:(id)a0 completion:(id /* block */)a1;
- (void)fetchAMPMetadataForDiagnosticsWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)fetchClipMetadataAndImagesWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchClipMetadataWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchClipURLWithURLHash:(id)a0 completionHandler:(id /* block */)a1;
- (void)getLastLaunchOptionsWithBundleID:(id)a0 completion:(id /* block */)a1;
- (void)getUserNotificationConsentForBundleID:(id)a0 completion:(id /* block */)a1;
- (void)installClipWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)isClipURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)openClipWithInvocationUIIfNeededWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)openClipWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)openClipWithURL:(id)a0 launchOptions:(id)a1 completion:(id /* block */)a2;
- (void)performValidationWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)prewarmClipWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerSessionProxy:(id)a0;
- (void)remoteServiceDidCrash;
- (void)uninstallClipWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)uninstallClipsWithBundleIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)unregisterSessionProxy:(id)a0;

@end
