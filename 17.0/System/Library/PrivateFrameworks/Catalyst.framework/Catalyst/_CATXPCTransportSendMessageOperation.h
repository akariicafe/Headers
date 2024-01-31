@class CATXPCTransport, CATMessage;

@interface _CATXPCTransportSendMessageOperation : CATOperation

@property (weak, nonatomic) CATXPCTransport *transport;
@property (retain, nonatomic) CATMessage *message;

- (void)main;
- (BOOL)isAsynchronous;
- (void)didProcessMessage;
- (void).cxx_destruct;
- (void)didFailWithError:(id)a0;

@end
