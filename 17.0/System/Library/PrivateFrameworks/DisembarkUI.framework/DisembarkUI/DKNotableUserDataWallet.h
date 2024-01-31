@class NSArray, PKPaymentSetupAssistantProvisioningContext;

@interface DKNotableUserDataWallet : NSObject

@property (retain, nonatomic) NSArray *localPaymentCards;
@property (retain, nonatomic) PKPaymentSetupAssistantProvisioningContext *paymentProvisioningContext;
@property (readonly, nonatomic) NSArray *walletCards;

- (void).cxx_destruct;
- (id)passSnapshotForCredential:(id)a0;
- (id)initWithContext:(id)a0 localCards:(id)a1;

@end
