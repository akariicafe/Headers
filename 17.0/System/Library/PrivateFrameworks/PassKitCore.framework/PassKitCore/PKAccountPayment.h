@class PKAccountPaymentScheduleDetails, NSString, PKAccountPaymentFundingSource, NSDate, PKCurrencyAmount;

@interface PKAccountPayment : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *referenceIdentifier;
@property (copy, nonatomic) NSString *clientReferenceIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSDate *paymentDate;
@property (copy, nonatomic) NSDate *paymentStatusDate;
@property (copy, nonatomic) NSDate *expectedCreditReleaseDate;
@property (nonatomic) BOOL cancellable;
@property (copy, nonatomic) NSDate *cancellationExpiryDate;
@property (nonatomic) long long state;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) PKAccountPaymentFundingSource *fundingSource;
@property (retain, nonatomic) PKAccountPaymentScheduleDetails *scheduleDetails;
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
- (BOOL)willSkipFirstPaymentForAccount:(id)a0;
- (void)encodeWithRecord:(id)a0;
- (id)initWithDictionary:(id)a0 productTimeZone:(id)a1;
- (BOOL)isCurrentlyCancellable;
- (BOOL)isOnHoldForAccount:(id)a0;
- (BOOL)isRecurring;

@end
