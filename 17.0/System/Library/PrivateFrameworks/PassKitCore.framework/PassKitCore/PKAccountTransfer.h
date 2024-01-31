@class NSString, PKAccountTransferScheduleDetails, NSDate, PKCurrencyAmount, PKAccountTransferExternalAccount;

@interface PKAccountTransfer : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *referenceIdentifier;
@property (copy, nonatomic) NSString *clientReferenceIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (retain, nonatomic) PKCurrencyAmount *holdAmount;
@property (copy, nonatomic) NSDate *transferDate;
@property (copy, nonatomic) NSDate *transferStatusDate;
@property (nonatomic) BOOL cancellable;
@property (copy, nonatomic) NSDate *cancellationExpiryDate;
@property (copy, nonatomic) NSDate *expectedCompletionDate;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) PKAccountTransferExternalAccount *externalAccount;
@property (retain, nonatomic) PKAccountTransferScheduleDetails *scheduleDetails;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordType;
+ (id)recordNamePrefix;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithRecord:(id)a0;
- (BOOL)fundsAreAvailable;
- (id)initWithDictionary:(id)a0 productTimeZone:(id)a1;
- (BOOL)isCurrentlyCancellable;

@end
