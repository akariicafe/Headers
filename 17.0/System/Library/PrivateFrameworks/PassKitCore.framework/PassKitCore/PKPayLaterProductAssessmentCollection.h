@class NSDictionary, NSArray;

@interface PKPayLaterProductAssessmentCollection : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_productAssessments;
    NSArray *_eligibleProductAssessments;
    NSArray *_ineligibleProductAssessments;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)eligibleProductAssessments;
- (id)financingOptionWithSelectionIdentifier:(id)a0 productType:(unsigned long long)a1;
- (id)ineligibleProductAssessments;
- (id)productAssessmentForProductType:(unsigned long long)a0;

@end
