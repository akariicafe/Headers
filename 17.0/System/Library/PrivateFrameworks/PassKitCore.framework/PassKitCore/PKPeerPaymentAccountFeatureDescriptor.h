@class NSDecimalNumber, NSArray, NSTimeZone;

@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDecimalNumber *feePercentage;
@property (copy, nonatomic) NSDecimalNumber *minimumFee;
@property (copy, nonatomic) NSDecimalNumber *maximumFee;
@property (copy, nonatomic) NSArray *amountSuggestions;
@property (copy, nonatomic) NSArray *thresholdSuggestions;
@property (retain, nonatomic) NSArray *frequencyOptions;
@property (copy, nonatomic) NSTimeZone *productTimeZone;
@property (nonatomic) long long maximumPayments;
@property (nonatomic) long long endProcessingHour;
@property (nonatomic) double proactiveFetchPeriod;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_suggestionsFromStrings:(id)a0;
- (BOOL)isEqualToPeerPaymentAccountFeatureDescriptor:(id)a0;

@end
