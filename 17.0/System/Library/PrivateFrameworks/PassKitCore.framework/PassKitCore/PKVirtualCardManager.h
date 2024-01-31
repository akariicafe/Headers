@class PKAccountService, PKInAppPaymentService, PKPaymentService, NSObject;
@protocol OS_dispatch_queue;

@interface PKVirtualCardManager : NSObject {
    PKInAppPaymentService *_inAppPaymentService;
    PKAccountService *_accountService;
    PKPaymentService *_paymentService;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *virtualCardQueue;

+ (void)isVPANAutoFillSupported:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)urlToPassDetailsForVirtualCard:(id)a0;
- (void)accountVirtualCardsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)activeVirtualCardsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)credentialsForVirtualCard:(id)a0 authorization:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)credentialsForVirtualCard:(id)a0 authorization:(id)a1 options:(unsigned long long)a2 merchantHost:(id)a3 completion:(id /* block */)a4;
- (void)dismissDetailsForVirtualCard:(id)a0 completion:(id /* block */)a1;
- (void)promptDetailsForVirtualCard:(id)a0 completion:(id /* block */)a1;
- (void)queryKeychainForVirtualCard:(id /* block */)a0;
- (id)urlToListOfCards;
- (void)vpanVirtualCardsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;

@end
