@class NSArray, NSString, NSDecimalNumber;

@interface PKCreditAccountFeatureDescriptor : PKAccountFeatureDescriptor

@property (nonatomic) unsigned long long paymentFundingSourceTypes;
@property (nonatomic) unsigned long long paymentPresets;
@property (nonatomic) unsigned long long paymentFrequencies;
@property (copy, nonatomic) NSArray *supportedFileFormatsForTransactionData;
@property (copy, nonatomic) NSString *paymentTermsIdentifier;
@property (nonatomic) unsigned long long maximumAccountUsers;
@property (nonatomic) unsigned long long minimumOwnerAge;
@property (nonatomic) unsigned long long minimumParticipantAge;
@property (copy, nonatomic) NSArray *supportedDestinations;
@property (copy, nonatomic) NSDecimalNumber *savingsAPY;
@property (copy, nonatomic) NSDecimalNumber *savingsInterestRate;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToCreditAccountFeatureDescriptor:(id)a0;
- (id)productForFeature:(unsigned long long)a0;

@end
