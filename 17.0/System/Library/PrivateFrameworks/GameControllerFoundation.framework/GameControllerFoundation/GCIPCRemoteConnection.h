@class NSArray, NSXPCConnection, NSString, NSObject;
@protocol OS_os_log;

@interface GCIPCRemoteConnection : NSObject <GCIPCConnection> {
    _Atomic BOOL _invalid;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy) NSArray *interruptionHandlers;
@property (copy) NSArray *invalidationHandlers;
@property (readonly) NSObject<OS_os_log> *log;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly) struct { unsigned int x0[8]; } peerAuditToken;
@property (readonly) int peerAuditSessionIdentifier;
@property (readonly) int peerProcessIdentifier;
@property (readonly) unsigned int peerEffectiveUserIdentifier;
@property (readonly) unsigned int peerEffectiveGroupIdentifier;
@property (readonly) NSString *peerBundleIdentifier;

- (id)init;
- (unsigned long long)hash;
- (id)redactedDescription;
- (void)suspend;
- (void)invalidate;
- (id)initWithConnection:(id)a0;
- (id)remoteProxy;
- (id)synchronousRemoteProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteProxyWithErrorHandler:(id /* block */)a0;
- (id)addInvalidationHandler:(id /* block */)a0;
- (id)description;
- (void)resume;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)addInterruptionHandler:(id /* block */)a0;
- (void)scheduleSendBarrierBlock:(id /* block */)a0;
- (BOOL)isEqualToConnection:(id)a0;
- (id)peerValueForEntitlement:(id)a0;

@end
