@class BSAuditToken, BSServiceConnection;
@protocol BSServiceConnectionContext;

@interface _SBKeyboardServiceClient : NSObject

@property (readonly, nonatomic) BSServiceConnection<BSServiceConnectionContext> *connectionContext;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BSAuditToken *auditToken;

- (id)description;
- (void).cxx_destruct;
- (id)initWithConnectionContext:(id)a0;

@end
