@class NSArray, NSString, _LTTranslationStatistics;

@interface _LTTranslationCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double confidence;
@property (nonatomic, getter=isLowConfidence) BOOL lowConfidence;
@property (copy, nonatomic) NSArray *tokens;
@property (copy, nonatomic) NSString *formattedString;
@property (copy, nonatomic) NSString *sanitizedFormattedString;
@property (copy, nonatomic) NSArray *preToPostITN;
@property (copy, nonatomic) NSArray *senses;
@property (copy, nonatomic) NSArray *genderAlternatives;
@property (copy, nonatomic) _LTTranslationStatistics *statistics;
@property (copy, nonatomic) NSString *romanization;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
