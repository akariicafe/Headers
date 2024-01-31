@class NSXPCConnection, BCSNFCReader;

@interface BCSNotificationService : NSObject <BCSNotificationServiceProtocol> {
    BCSNFCReader *_nfcReader;
    NSXPCConnection *_connection;
}

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveNotificationResponse:(id)a0;
- (void)cancelNotificationsForCodeType:(long long)a0;
- (void)_cancelNotificationsForCodeType:(long long)a0;
- (void)_didReceiveNotificationResponse:(id)a0;
- (void)notifyParsedCodeWithData:(id)a0 codePayload:(id)a1 shouldReplacePreviousNotifications:(BOOL)a2 reply:(id /* block */)a3;
- (void)startNFCReaderWithDelegate:(id)a0;
- (void)stopNFCReader;

@end
