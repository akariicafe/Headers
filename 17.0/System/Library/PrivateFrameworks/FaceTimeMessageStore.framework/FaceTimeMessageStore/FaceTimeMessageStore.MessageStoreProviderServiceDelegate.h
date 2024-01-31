@interface FaceTimeMessageStore.MessageStoreProviderServiceDelegate : NSObject <_FTMSMessageStoreControllerClientDelegate, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ hostConnections;
    void /* unknown type, empty encoding */ connectionsQueue;
    void /* unknown type, empty encoding */ messageStoreServer;
}

- (void)messageStoreDidAddMessages:(id)a0;
- (void)messageStoreDidDeleteMessages:(id)a0;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(id)a0;
- (void)messageStoreDidReconnect;
- (void)messageStoreDidUpdateMessages:(id)a0;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
