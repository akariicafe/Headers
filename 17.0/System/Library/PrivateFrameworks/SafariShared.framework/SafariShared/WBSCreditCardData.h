@class NSString, PKVirtualCard, NSDictionary, NSDate;

@interface WBSCreditCardData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *cardNumber;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *cardSecurityCode;
@property (nonatomic) BOOL promptToSaveSecurityCode;
@property (readonly, nonatomic) PKVirtualCard *virtualCard;
@property (readonly, nonatomic) BOOL isCardFromWallet;
@property (readonly) BOOL shouldHide;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_expirationDateFormatter;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasSameCreditCardInformationAs:(id)a0;
- (id)initWithKeychainRepresentation:(id)a0;
- (id)_expirationDateFromPKVirtualCard:(id)a0;
- (id)_expirationDateFromPKVirtualCardCredentials:(id)a0;
- (id)creditCardDataByMergingOtherAttributesBesidesCardNumberFromCard:(id)a0 mergeSecurityCode:(BOOL)a1;
- (id)creditCardDataByUpdatingLastUsedDate:(id)a0;
- (id)initWithCardName:(id)a0 number:(id)a1 cardholderName:(id)a2 expirationDate:(id)a3;
- (id)initWithCardName:(id)a0 number:(id)a1 cardholderName:(id)a2 expirationDate:(id)a3 securityCode:(id)a4;
- (id)initWithVirtualCard:(id)a0;
- (id)initWithVirtualCardCredentials:(id)a0 virtualCard:(id)a1;
- (id)keychainRepresentationByMigratingExistingKeychainData:(id)a0;
- (id)keychainRepresentationForNewCard;

@end
