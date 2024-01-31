@class NSString, NSDate;

@interface PKPaymentSafariCredential : PKPaymentCredential

@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *cardholderName;
@property (readonly, copy, nonatomic) NSString *cardNumber;
@property (readonly, copy, nonatomic) NSString *expiration;
@property (readonly, copy, nonatomic) NSString *securityCode;
@property (readonly, nonatomic) BOOL canCheckEligibility;

+ (BOOL)supportsSecureCoding;

- (long long)credentialType;
- (unsigned long long)hash;
- (id)longDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescription;
- (id)initWithSafariDictionary:(id)a0;
- (id)sanitizedPrimaryAccountNumber;

@end
