@class NSString, IDSService, NSObject;
@protocol DNDSSyncServiceDelegate, OS_dispatch_queue;

@interface DNDSIDSSyncService : NSObject <IDSServiceDelegate, DNDSSyncService> {
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_syncService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DNDSSyncServiceDelegate> delegate;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)initWithIDSService:(id)a0;
- (void)_queue_resume;
- (void)sendMessage:(id)a0 withVersionNumber:(unsigned long long)a1 messageType:(id)a2 toDestinations:(id)a3 completionHandler:(id /* block */)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)resume;
- (void)sendMessage:(id)a0 withVersionNumber:(unsigned long long)a1 messageType:(id)a2 toDestinations:(id)a3 identifyingCompletionHandler:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_queue_handleIncomingMessage:(id)a0 deviceIdentifier:(id)a1;
- (BOOL)_queue_sendMessage:(id)a0 withVersionNumber:(unsigned long long)a1 messageType:(id)a2 toDestinations:(id)a3 requestIdentifier:(id *)a4 error:(id *)a5;

@end
