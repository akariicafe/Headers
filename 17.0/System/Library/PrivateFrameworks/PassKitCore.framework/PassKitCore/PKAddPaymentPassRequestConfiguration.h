@class NSString, NSArray, NSSet;

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isPaymentAccount) BOOL paymentAccount;
@property (readonly, copy, nonatomic) NSString *encryptionScheme;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *primaryAccountSuffix;
@property (copy, nonatomic) NSArray *cardDetails;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *paymentNetwork;
@property (copy, nonatomic) NSSet *productIdentifiers;
@property (nonatomic) BOOL requiresFelicaSecureElement;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_effectiveDetails;
- (id)_filterWebServices:(id)a0 primaryAccountIdentifierRequired:(BOOL)a1;
- (id)initWithEncryptionScheme:(id)a0;

@end
