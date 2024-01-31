@class PKPeerPaymentAccount, PKPeerPaymentService;

@interface NPKPeerPaymentAccountManager : NSObject

@property (retain) PKPeerPaymentAccount *account;
@property (readonly, nonatomic) PKPeerPaymentService *peerPaymentService;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_handleAccountChanged:(id)a0;
- (id)initWithPeerPaymentService:(id)a0;
- (void)_updateAccount;

@end
