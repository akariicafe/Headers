@class CDPDSecureChannelContext;

@interface CDPDSecureChannelController : NSObject {
    CDPDSecureChannelContext *_secureChannelContext;
}

- (id)initWithContext:(id)a0;
- (void)startCircleApplicationApprovalServerWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_processAndReplyWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)_startListeningWithProxy:(id)a0;
- (void)joinCircle:(id /* block */)a0;

@end
