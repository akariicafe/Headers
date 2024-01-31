@class PKPayLaterProductAssessmentInstallmentSummary, NSArray, NSDictionary, PKPayLaterPreliminaryAssessment, NSDecimalNumber;

@interface PKPayLaterProductAssessment : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_financingOptionIdentifierMap;
    PKPayLaterProductAssessmentInstallmentSummary *_lowestPossibleInstallmentSummary;
    NSDecimalNumber *_minimumAPR;
    NSDecimalNumber *_maximumAPR;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long productType;
@property (readonly, nonatomic) unsigned long long financingEligibility;
@property (readonly, copy, nonatomic) NSArray *financingOptions;
@property (readonly, nonatomic) PKPayLaterPreliminaryAssessment *preliminaryAssessment;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEligible;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)analyticsFinancingOptionType;
- (id)financingOptionWithIdentifier:(id)a0;

@end
