@interface FaceTimeMessageStore.VideoMessagingFileTransferer : NSObject <IDSServiceDelegate> {
    void /* unknown type, empty encoding */ incomingDelegate;
    void /* unknown type, empty encoding */ outgoingDelegate;
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ serverBag;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ transactionLock;
    void /* unknown type, empty encoding */ transactionMap;
    void /* unknown type, empty encoding */ downloadManager;
}

- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 pendingResourceWithMetadata:(id)a2 fromID:(id)a3 acknowledgementBlock:(id /* block */)a4 context:(id)a5;
- (id)init;
- (void).cxx_destruct;

@end
