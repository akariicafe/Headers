@protocol MCMXPCMessage, MCMReply;

@interface MCMCommandOperationReclaimDiskSpace : MCMCommand

@property (readonly, nonatomic) id<MCMXPCMessage> message;
@property (readonly, nonatomic) id<MCMReply> handoffReply;
@property (readonly, nonatomic) BOOL asynchronously;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (BOOL)_removeItemOrMoveToTempAtURL:(id)a0 error:(id *)a1;
- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2 asyncResultPromise:(id)a3;
- (void)_deleteContainersOnDeathRowWithCompletion:(id /* block */)a0;
- (id)initWithAsynchronously:(BOOL)a0 context:(id)a1 resultPromise:(id)a2 handoffForReply:(id)a3;
- (void).cxx_destruct;
- (id)initWithAsynchronously:(BOOL)a0 context:(id)a1 resultPromise:(id)a2;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (void)_deleteContainersAtDeathRowURL:(id)a0 error:(id *)a1;

@end
