@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery {
    MFSMTPConnection *_connection;
}

- (void)dealloc;
- (void)_openConnection;
- (void)setAccount:(id)a0;
- (id)deliverMessageData:(id)a0 toRecipients:(id)a1;
- (Class)deliveryClass;

@end
