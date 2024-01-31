@class NSArray, UIDictationInterpretation;

@interface UIDictationInterpretationGroup : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *interpretations;
@property (readonly, nonatomic) double bestConfidenceScore;
@property (readonly, nonatomic) UIDictationInterpretation *bestInterpretation;
@property (readonly, nonatomic) BOOL isLowConfidence;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithInterpretations:(id)a0;
- (id)initWithInterpretations:(id)a0 isLowConfidence:(BOOL)a1;

@end
