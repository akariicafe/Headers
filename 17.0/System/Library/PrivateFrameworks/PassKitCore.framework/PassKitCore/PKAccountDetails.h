@class PKAppleBalanceAccountDetails, PKPayLaterAccountDetails, PKCreditAccountDetails, PKSavingsAccountDetails;

@interface PKAccountDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKCreditAccountDetails *creditDetails;
@property (readonly, nonatomic) PKPayLaterAccountDetails *payLaterDetails;
@property (readonly, nonatomic) PKAppleBalanceAccountDetails *appleBalanceDetails;
@property (readonly, nonatomic) PKSavingsAccountDetails *savingsDetails;
@property (readonly, nonatomic) unsigned long long type;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCloudRecord:(id)a0 codingType:(unsigned long long)a1;
- (void)ingestExtendedAccountDetails:(id)a0;
- (id)initWithAppleBalanceDetails:(id)a0;
- (id)initWithCloudRecord:(id)a0 type:(unsigned long long)a1;
- (id)initWithCreditDetails:(id)a0;
- (id)initWithDictionary:(id)a0 type:(unsigned long long)a1;
- (id)initWithPayLaterDetails:(id)a0;
- (id)initWithSavingsDetails:(id)a0;

@end
