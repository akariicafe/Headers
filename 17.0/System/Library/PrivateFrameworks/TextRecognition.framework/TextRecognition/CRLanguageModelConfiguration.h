@class NSArray, NSNumber;

@interface CRLanguageModelConfiguration : NSObject

@property (retain) NSArray *filteringCharLengths;
@property (retain) NSArray *lmFilteringThresholds;
@property (readonly) NSNumber *lexiconWeight;
@property (readonly) NSNumber *characterLMWeight;
@property (readonly) NSNumber *wordLMWeight;
@property (readonly) float filteringActivationThreshold;
@property (readonly) long long filteringMinimumLength;

+ (id)configurationForLanguageIdentifier:(id)a0 rev:(unsigned long long)a1;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (float)lmThresholdForLength:(long long)a0;

@end
