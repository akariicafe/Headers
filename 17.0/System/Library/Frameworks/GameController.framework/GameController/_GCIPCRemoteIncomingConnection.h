@class NSString, _GCIPCRemoteProcess;

@interface _GCIPCRemoteIncomingConnection : GCIPCRemoteIncomingConnection <_GCIPCIncomingConnection>

@property (readonly, weak, nonatomic) _GCIPCRemoteProcess *process;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly) struct { unsigned int x0[8]; } peerAuditToken;
@property (readonly) int peerAuditSessionIdentifier;
@property (readonly) int peerProcessIdentifier;
@property (readonly) unsigned int peerEffectiveUserIdentifier;
@property (readonly) unsigned int peerEffectiveGroupIdentifier;
@property (readonly) NSString *peerBundleIdentifier;

- (id)initWithConnection:(id)a0 fromProcess:(id)a1;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;

@end
