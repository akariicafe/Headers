@class MFSMTPConnection;

@interface MFSMTPDelivery : MFMailDelivery {
    MFSMTPConnection *_connection;
}

+ (id)log;

- (void)_openConnection;
- (void)setAccount:(id)a0;
- (void).cxx_destruct;
- (id)deliverMessageData:(id)a0 toRecipients:(id)a1;
- (Class)deliveryClass;

@end
