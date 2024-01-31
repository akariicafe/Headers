@class NSNumber, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TTSRulesetRunner : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *regexExecutionQueue;
@property (retain, nonatomic) NSMutableArray *ruleReplacements;
@property (retain, nonatomic) NSMutableArray *ruleSets;
@property BOOL executing;
@property BOOL shouldAbort;
@property (copy, nonatomic) id /* block */ preRuleWriter;
@property (copy, nonatomic) id /* block */ postRuleWriter;
@property (readonly, nonatomic) NSNumber *ruleCount;
@property (copy, nonatomic) id /* block */ matchLogger;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (void)cancelProcessing;
- (id)_computeActiveRanges:(id)a0 withIgnoreRanges:(id)a1;
- (id)_ignoreRangesForString:(id)a0;
- (id)_processSpeechString:(id)a0 startingAt:(unsigned long long)a1 currentRecursionDepth:(unsigned long long)a2;
- (id)_processTemplateReplacementTextForText:(id)a0 replacement:(id)a1 cString:(const char *)a2;
- (void)_recomputeRuleOrdering;
- (void)loadRuleSet:(id)a0;
- (id)processText:(id)a0;
- (void)unloadRuleset:(id)a0;

@end
