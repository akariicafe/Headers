@class NSString, NSXPCConnection;

@interface SDBetaEnrollmentHelperDaemon : NSObject <NSXPCListenerDelegate, SDBetaEnrollmentHelperDaemonInterface>

@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)addFBAHelpMenu:(id /* block */)a0;
- (void)addFBASymlink:(id /* block */)a0;
- (void)isPreReleaseInstallationAllowed:(id /* block */)a0;
- (void)removeBetaEnrollmentData:(id /* block */)a0;
- (void)removeFBAHelpMenu:(id /* block */)a0;
- (void)removeSeedEnrollmentCookie:(id /* block */)a0;

@end
