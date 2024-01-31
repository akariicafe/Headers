@class NSString, CPSPromise, NSURL, CPSSessionConfiguration, CPSSessionProxy;

@interface CPSClipMetadataRequest : NSObject <CPSSessionProxyDelegate> {
    NSString *_fullHash;
    NSURL *_requestURL;
    CPSSessionProxy *_sessionProxy;
    CPSPromise *_availabilityPromise;
    CPSPromise *_iconPromise;
    CPSPromise *_metadataPromise;
}

@property (readonly, nonatomic) CPSSessionConfiguration *sessionConfiguration;
@property (readonly, nonatomic, getter=isLikelyAvailable) BOOL likelyAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)getClipMetadataSynchronously;
- (id)initWithURL:(id)a0 fallbackClipBundleID:(id)a1;
- (void)requestDownloadedIconWithMetadata:(id)a0 completion:(id /* block */)a1;
- (void)requestMetadataWithCompletion:(id /* block */)a0;
- (id)initWithURLHash:(id)a0;
- (void)proxy:(id)a0 didDetermineAvailability:(BOOL)a1;
- (void)proxy:(id)a0 didFinishLoadingWithError:(id)a1;
- (void)proxy:(id)a0 didRetrieveApplicationIcon:(id)a1;
- (void)proxyDidRetrieveBusinessIcon:(id)a0;
- (void)proxyDidUpdateMetadata:(id)a0;
- (void)proxyRemoteServiceDidCrash:(id)a0;
- (void)_setUpSessionProxyAndPromisesWithURL:(id)a0 fallbackClipBundleID:(id)a1;
- (id)getDownloadedIconURLSynchronously;

@end
