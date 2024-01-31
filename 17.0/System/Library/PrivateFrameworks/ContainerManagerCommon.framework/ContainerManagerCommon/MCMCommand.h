@class MCMCommandContext, NSString;
@protocol MCMResultPromise, MCMReply;

@interface MCMCommand : NSObject <MCMCommand_Internal, MCMCommand_XPC, MCMCommand>

@property (readonly, nonatomic) MCMCommandContext *context;
@property (readonly, nonatomic) id<MCMReply> reply;
@property (readonly, nonatomic) id<MCMResultPromise> resultPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;
+ (id)relayToPrivilegedDaemonMessage:(id)a0 context:(id)a1;

- (void)execute;
- (void).cxx_destruct;
- (BOOL)preflightClientAllowed;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (id)initWithContext:(id)a0 resultPromise:(id)a1;

@end
