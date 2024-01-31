@protocol _FTMSMessageStoreControllerClientDelegate;

@interface FaceTimeMessageStore.MessageStoreServer : _TtCs12_SwiftObject <FaceTimeMessageStore.MessageStoreControllerXPCHostProtocol> {
    void /* unknown type, empty encoding */ dataSource;
}

@property (nonatomic, retain) id<_FTMSMessageStoreControllerClientDelegate> delegate;

- (void)pingWithCompletion:(id /* block */)a0;
- (void)getAccountStatusWithCompletion:(id /* block */)a0;
- (void)addMessage:(id)a0 completion:(id /* block */)a1;
- (void)deleteMessages:(id)a0 completion:(id /* block */)a1;
- (void)getMessageCountWithCompletion:(id /* block */)a0;
- (void)getMessagesWithQuery:(id)a0 pageSize:(long long)a1 page:(long long)a2 completion:(id /* block */)a3;
- (void)isTranscriptionEnabledWithCompletion:(id /* block */)a0;
- (void)saveMessageToPhotoLibraryWithMessageUUID:(id)a0 completion:(id /* block */)a1;
- (void)updateMessages:(id)a0 completion:(id /* block */)a1;

@end
