@class NSString, FBServiceClientAuthenticator, SBSPortalSource, BSServiceConnectionListener;

@interface SBSystemAperturePortalSourceInfoRequestServer : NSObject <SBSSystemAperturePortalSourceInfoRequestClientToServerInterface, BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener *_connectionListener;
    SBSPortalSource *_rootSystemApertureWindowPortalSource;
    FBServiceClientAuthenticator *_serviceClientAuthenticator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)startListener;
- (oneway void)rootWindowPortalSourceWithCompletion:(id /* block */)a0;
- (id)initWithPortalSource:(id)a0;

@end
