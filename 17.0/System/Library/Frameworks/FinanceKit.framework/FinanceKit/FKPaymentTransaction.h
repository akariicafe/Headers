@class NSDecimalNumber, NSString, FKApplePayTransactionInsight, NSDate, FKAmount, FKMapsTransactionInsight;

@interface FKPaymentTransaction : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *transactionId;
@property (readonly, copy, nonatomic) NSString *paymentHash;
@property (readonly, copy, nonatomic) FKAmount *amount;
@property (readonly, copy, nonatomic) FKAmount *foreignAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *foreignCurrencyExchangeRate;
@property (readonly, copy, nonatomic) NSDate *transactionDate;
@property (readonly, copy, nonatomic) NSDate *transactionStatusChangedDate;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *transactionDescription;
@property (readonly, nonatomic) long long merchantCategoryCode;
@property (readonly, copy, nonatomic) FKMapsTransactionInsight *mapsInsight;
@property (readonly, copy, nonatomic) FKApplePayTransactionInsight *applePayInsight;
@property (readonly, nonatomic) BOOL hasNotificationServiceData;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTransactionIdentifier:(id)a0 paymentHash:(id)a1 amount:(id)a2 foreignAmount:(id)a3 foreignCurrencyExchangeRate:(id)a4 transactionDate:(id)a5 transactionStatusChangedDate:(id)a6 type:(unsigned long long)a7 status:(long long)a8 transactionDescription:(id)a9 merchantCategoryCode:(long long)a10 mapsInsight:(id)a11 hasNotificationServiceData:(BOOL)a12;
- (id)initWithTransactionIdentifier:(id)a0 paymentHash:(id)a1 amount:(id)a2 foreignAmount:(id)a3 foreignCurrencyExchangeRate:(id)a4 transactionDate:(id)a5 transactionStatusChangedDate:(id)a6 type:(unsigned long long)a7 status:(long long)a8 transactionDescription:(id)a9 merchantCategoryCode:(long long)a10 mapsInsight:(id)a11 hasNotificationServiceData:(BOOL)a12 applePayInsight:(id)a13;

@end
