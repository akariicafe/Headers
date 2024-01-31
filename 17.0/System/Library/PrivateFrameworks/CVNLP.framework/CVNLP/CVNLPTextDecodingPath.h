@class NSString;

@interface CVNLPTextDecodingPath : NSObject

@property (readonly, nonatomic) double modelLogProbability;
@property (readonly, nonatomic) double characterLanguageModelLogProbability;
@property (readonly, nonatomic) double wordLanguageModelLogProbability;
@property (readonly, nonatomic) double lexiconScore;
@property (readonly, nonatomic) BOOL hasProblematicMixedScriptWords;
@property (readonly, nonatomic) long long characterCount;
@property (readonly, nonatomic) long long pseudoSpaceCount;
@property (readonly, nonatomic) long long tokenCount;
@property (readonly, nonatomic) NSString *string;

+ (id /* block */)defaultPathScoringFunctionPruneProblematicMixedScriptWordPaths:(BOOL)a0;
+ (id /* block */)defaultPathScoringFunction;
+ (id /* block */)defaultPathScoringFunctionForLanguageResourceBundle:(id)a0;
+ (id /* block */)defaultPathScoringFunctionForLanguageResourceBundle:(id)a0 pruneProblematicMixedScriptWordPaths:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCharacterLanguageModelLogProbability:(double)a0 wordLanguageModelLogProbability:(double)a1 lexiconScore:(double)a2 hasProblematicMixedScriptWords:(BOOL)a3 string:(id)a4;

@end
