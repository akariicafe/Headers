@class ABTachogramClassification, HKHRSampleClassification;

@interface HKHRAFibBurdenTachogramClassificationProvider : NSObject <NSSecureCoding> {
    ABTachogramClassification *_computedTachogramClassification;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKHRSampleClassification *sampleClassification;
@property (readonly, nonatomic) ABTachogramClassification *tachogramClassification;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSampleClassification:(id)a0;
- (id)initWithSampleClassification:(id)a0 tachogramClassification:(id)a1;

@end
