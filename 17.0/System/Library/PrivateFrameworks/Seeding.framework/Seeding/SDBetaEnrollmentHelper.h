@class NSString, NSXPCConnection;

@interface SDBetaEnrollmentHelper : NSObject <NSXPCListenerDelegate>

@property (retain) NSXPCConnection *daemonConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxy;
- (void)connectToDaemon;
- (void)addFBAHelpMenu:(id /* block */)a0;
- (BOOL)isPreReleaseInstallationAllowed;
- (void)addFBASymlink:(id /* block */)a0;
- (void)removeBetaEnrollmentData;
- (void)removeFBAHelpMenu:(id /* block */)a0;
- (void)removeSeedEnrollmentCookie:(id /* block */)a0;

@end
