@class PKPaymentPass, PKVirtualCard, PKPhysicalCard, PKAccountService, PKAccount;

@interface PKAccountCardNumbersPresenter : NSObject {
    PKVirtualCard *_virtualCard;
    PKPhysicalCard *_physicalCard;
    PKAccount *_account;
    PKPaymentPass *_pass;
    long long _context;
    PKAccountService *_accountService;
}

@property (readonly, nonatomic) BOOL isLoadingVirtualCard;

+ (void)authAndDecryptWithVirtualCard:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (void)_prepareAuthForVirtualCard:(id)a0 completion:(id /* block */)a1;
- (id)initWithVirtualCard:(id)a0 physicalCard:(id)a1 account:(id)a2 pass:(id)a3 context:(long long)a4;
- (void)presentCardNumbersWithCompletion:(id /* block */)a0;

@end
