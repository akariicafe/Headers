@class NSString, PKAccount, PKPaymentPass;

@interface PKBusinessChatAccountStateContext : NSObject <PKBusinessChatContext> {
    PKAccount *_account;
    PKPaymentPass *_paymentPass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresAuthorization;
- (id)bodyText;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 paymentPass:(id)a1;
- (id)groupParameters;
- (id)businessIdentifier;
- (id)intentParameters;

@end
