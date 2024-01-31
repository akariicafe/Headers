@class PKPaymentPass, NSDateComponents, PKPaymentTransaction, PKAccount;

@interface PKAccountViewInterfaceConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) PKAccount *account;
@property (nonatomic) BOOL isNewAccount;
@property (nonatomic) unsigned long long viewStyle;
@property (nonatomic) unsigned long long destination;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) NSDateComponents *rewardsDateComponents;
@property (retain, nonatomic) PKPaymentPass *cashbackPass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
