@class NSDictionary, NSArray;

@interface CVNLPCaptionRuntimeParameters : NSObject

@property (nonatomic) double captionModelMinimumConfidence;
@property (nonatomic) double captionModelLengthNormalizationFactor;
@property (nonatomic) int excludeGenderStrategy;
@property (retain, nonatomic) NSDictionary *classifierRevisions;
@property (retain, nonatomic) NSDictionary *sensitiveImageParameters;
@property (retain, nonatomic) NSArray *replacements;
@property (retain, nonatomic) NSArray *genderedTokens;
@property (retain, nonatomic) NSArray *blackListRules;
@property (retain, nonatomic) NSArray *excludeGenderReplacements;
@property (retain, nonatomic) NSArray *excludeGenderTriggers;
@property (nonatomic) int genderOption;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)_loadRuntimeParameters:(id)a0;

@end
