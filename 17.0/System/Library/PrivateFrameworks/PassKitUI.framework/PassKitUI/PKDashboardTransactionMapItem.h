@class NSString, PKPaymentTransaction, PKMerchant;

@interface PKDashboardTransactionMapItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) PKMerchant *merchant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void).cxx_destruct;

@end
