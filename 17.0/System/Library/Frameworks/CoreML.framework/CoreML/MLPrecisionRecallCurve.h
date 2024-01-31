@class NSArray;

@interface MLPrecisionRecallCurve : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *precisionValues;
@property (readonly, nonatomic) NSArray *precisionConfidenceThresholds;
@property (readonly, nonatomic) NSArray *recallValues;
@property (readonly, nonatomic) NSArray *recallConfidenceThresholds;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPrecisionValues:(id)a0 precisionConfidenceThresholds:(id)a1 recallValues:(id)a2 recallConfidenceThresholds:(id)a3;

@end
