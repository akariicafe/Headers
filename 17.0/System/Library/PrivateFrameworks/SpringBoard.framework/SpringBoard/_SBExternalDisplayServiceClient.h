@class BSProcessHandle, BSAuditToken, BSServiceConnection;

@interface _SBExternalDisplayServiceClient : NSObject

@property (readonly, nonatomic) BSServiceConnection *connection;
@property (readonly, nonatomic) BSProcessHandle *remoteProcess;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BSAuditToken *auditToken;

- (id)description;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 remoteProcess:(id)a1;

@end
