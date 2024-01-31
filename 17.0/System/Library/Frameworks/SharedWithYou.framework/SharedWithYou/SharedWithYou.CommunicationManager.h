@interface SharedWithYou.CommunicationManager : NSObject <SLDServiceProxyDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_facetimeServiceProxy;
    void /* unknown type, empty encoding */ attributionIdentifier;
    void /* unknown type, empty encoding */ videoEnabled;
    void /* unknown type, empty encoding */ presentingViewController;
}

- (id)init;
- (void).cxx_destruct;
- (void)serviceProxyDidDisconnect:(id)a0;
- (void)serviceProxyDidConnect:(id)a0;

@end
