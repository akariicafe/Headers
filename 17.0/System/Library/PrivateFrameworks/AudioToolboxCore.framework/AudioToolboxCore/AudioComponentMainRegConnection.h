@class NSXPCConnection;

@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol> {
    void *mImpl;
    struct ConnectionInfo { NSXPCConnection *mConnection; int mExtUsePermission; BOOL mLinkedSDKRequiresEntitlement; } mConnInfo;
}

- (void)canRegisterComponent:(id)a0 reply:(id /* block */)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getComponentList:(id)a0 linkedSDKRequiresEntitlement:(BOOL)a1 includeExtensions:(BOOL)a2 forceWaitForExtensions:(BOOL)a3 reply:(id /* block */)a4;
- (id)initWithRegistrar:(void *)a0 connection:(id)a1;

@end
