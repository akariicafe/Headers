@class NSDictionary;

@interface MADVideoSafetyClassificationResult : MADVideoResult

@property (readonly, nonatomic) NSDictionary *scoresForLabels;
@property (readonly, nonatomic) BOOL isSensitive;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithIsSensitive:(BOOL)a0 scoresForLabels:(id)a1;

@end
