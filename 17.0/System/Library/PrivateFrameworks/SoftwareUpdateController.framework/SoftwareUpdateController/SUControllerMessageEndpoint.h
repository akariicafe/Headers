@class NSMutableDictionary, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface SUControllerMessageEndpoint : NSObject <IDSServiceDelegate, SUControllerMessageEndpoint>

@property (readonly, retain, nonatomic) IDSService *service;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSMutableDictionary *messageHandlers;
@property (retain, nonatomic) NSMutableDictionary *pendingMessageCompletions;
@property (retain, nonatomic) NSMutableDictionary *pendingMessageReplies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedEndpoint;

- (id)init;
- (void)suspend;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)resume;
- (void)sendMessage:(id)a0 withReply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)sendMessage:(id)a0 completion:(id /* block */)a1;
- (void)sendErrorReply:(id)a0 toMessage:(id)a1;
- (void)sendMessage:(id)a0 isCritical:(BOOL)a1 completion:(id /* block */)a2;
- (id)sendMessage:(id)a0 replyingTo:(id)a1 expectingResponse:(BOOL)a2 isCritical:(BOOL)a3 error:(id *)a4;
- (void)sendReply:(id)a0 toMessage:(id)a1;
- (void)setHandler:(id /* block */)a0 forMessagesOfType:(id)a1;
- (void)setHandler:(id /* block */)a0 forMessagesOfTypes:(id)a1;

@end
