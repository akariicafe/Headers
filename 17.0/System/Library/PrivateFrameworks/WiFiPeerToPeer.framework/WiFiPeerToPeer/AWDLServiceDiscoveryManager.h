@class NSString, NSXPCConnection, NSLock, NSMutableArray;

@interface AWDLServiceDiscoveryManager : NSObject <AWDLServiceDiscoveryManagerXPCDelegate> {
    NSLock *_lock;
    NSXPCConnection *_xpcConnection;
    int _notifyToken;
    BOOL _attemptedReconnect;
    NSMutableArray *_activeTrafficRegistrations;
    long long _suspendCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidatedActiveTrafficRegistration:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)_requiresConnection;
- (BOOL)suspendAWDLWithError:(id *)a0;
- (BOOL)queryAirPlayConnectivityWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)clearTrafficRegistration:(id)a0 error:(id *)a1;
- (void)connectionInvalidated;
- (BOOL)resumeAWDLWithError:(id *)a0;
- (BOOL)setTrafficRegistration:(id)a0 error:(id *)a1;
- (void)_retryConnection;
- (void).cxx_destruct;
- (BOOL)_usingAWDLDiscoveryManagerProxy:(id /* block */)a0 onSuccess:(id /* block */)a1 error:(id *)a2;
- (void)_removeFirstTrafficRegistrationMatching:(id)a0;
- (void)_destroyConnection;

@end
