@class NSDictionary;

@interface WPResources : NSObject {
    NSDictionary *_cachedLinkFilteringData;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _cachedLinkFilteringDataMutex;
}

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)requestAllowedLinkFilteringData:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestLinkFilteringData:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestTrackerDomainNamesData:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestTrackerNetworkAddresses:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadTrackerBlockerRuleListForStore:(id)a0 completionHandler:(id /* block */)a1;
- (void)_waitForCachedLinkFilteringData;
- (void)_doWithCachedLinkFilteringData:(id /* block */)a0;
- (void)_installMessageHandlerForTesting:(id /* block */)a0;
- (void)_makeXPCTimeoutInstantForTesting;
- (void)_resetStateForTesting;
- (void)requestTrackerBlockerContentExtension:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestTrackerDomainNames:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestTrackerQueryParameters:(id)a0 completionHandler:(id /* block */)a1;

@end
