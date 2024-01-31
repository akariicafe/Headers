@class NSDate, NSString, NSArray, PKPeerPaymentRecurringPaymentMemo, PKCurrencyAmount, PKPeerPaymentRecurringPaymentFundingSource, NSDecimalNumber, PKPeerPaymentRecurringPaymentTransaction;

@interface PKPeerPaymentRecurringPayment : NSObject <NSSecureCoding, PKCloudStoreCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSString *recipientAddress;
@property (copy, nonatomic) NSString *recipientAltDSID;
@property (nonatomic) BOOL sentByMe;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSDecimalNumber *threshold;
@property (copy, nonatomic) NSString *currency;
@property (retain, nonatomic) PKPeerPaymentRecurringPaymentFundingSource *fundingSource;
@property (nonatomic) unsigned long long frequency;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long actions;
@property (copy, nonatomic) NSArray *upcomingPaymentDates;
@property (retain, nonatomic) PKPeerPaymentRecurringPaymentMemo *memo;
@property (retain, nonatomic) PKPeerPaymentRecurringPaymentTransaction *lastExecutedTransaction;
@property (nonatomic) BOOL usesAppleCashBalance;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) PKCurrencyAmount *currencyThreshold;
@property (readonly, nonatomic) BOOL lastExecutedTransactionAppearsInHistory;

+ (id)recordNamePrefix;
+ (id)recordNameForRecurringPaymentIdentifier:(id)a0;
+ (id)recurringPaymentIdentifierFromRecordName:(id)a0;

- (unsigned long long)itemType;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)primaryIdentifier;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_actionsForStrings:(id)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)initWithDictionary:(id)a0 productTimeZone:(id)a1;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;

@end
