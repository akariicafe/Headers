@class PKPaymentPass, NSDictionary, PKPaymentBalanceReminder, PKTransitPassProperties, PKTransitBalanceModel;

@interface PKPaymentPassDetailCollectedProperties : NSObject

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKTransitPassProperties *transitPassProperties;
@property (retain, nonatomic) PKTransitBalanceModel *transitBalanceModel;
@property (retain, nonatomic) NSDictionary *balances;
@property (retain, nonatomic) NSDictionary *actionForBalanceIdentifier;
@property (retain, nonatomic) PKPaymentBalanceReminder *transitPropertiesBalanceReminder;
@property (retain, nonatomic) NSDictionary *reminderForBalanceIdentifier;

- (void).cxx_destruct;
- (id)initWithPass:(id)a0 transitPassProperties:(id)a1 transitBalanceModel:(id)a2 balances:(id)a3 actionForBalanceIdentifier:(id)a4 transitPropertiesBalanceReminder:(id)a5 reminderForBalanceIdentifier:(id)a6;

@end
