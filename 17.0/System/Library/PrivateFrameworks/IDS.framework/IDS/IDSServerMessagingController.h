@class IDSXPCDaemonController, NSString, NSMutableDictionary, NSHashTable;

@interface IDSServerMessagingController : NSObject <IDSXPCServerMessagingClient>

@property (readonly, nonatomic) NSString *topic;
@property (retain, nonatomic) NSHashTable *delegateMap;
@property (retain, nonatomic) IDSXPCDaemonController *daemonController;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSMutableDictionary *inFlightRequests;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } inFlightLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendCertifiedDeliveryReceipt:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithTopic:(id)a0;
- (id)initWithTopic:(id)a0 daemonController:(id)a1;
- (void)_failMessages;
- (void)_sendData:(id)a0 withOptions:(id)a1 identifier:(id)a2 completion:(id /* block */)a3;
- (void)_setupInterruptionHandler;
- (void)_setupXPC;
- (void)handleReceivedIncomingMessageData:(id)a0 identifier:(id)a1 context:(id)a2;
- (void)sendMessageData:(id)a0 withOptions:(id)a1 identifier:(id *)a2 completion:(id /* block */)a3;

@end
