@class CATMessage;
@protocol CATSharingConnection;

@interface CATSharingServiceTransportSendMessageOperation : CATOperation {
    id<CATSharingConnection> mConnection;
    CATMessage *mMessage;
}

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)cancel;
- (void)didSendMessageWithError:(id)a0;
- (id)initWithConnection:(id)a0 message:(id)a1;
- (void)sendMessage;

@end
