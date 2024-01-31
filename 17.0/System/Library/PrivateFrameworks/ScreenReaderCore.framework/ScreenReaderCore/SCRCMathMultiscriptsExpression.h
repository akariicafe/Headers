@class NSArray, SCRCMathExpression;

@interface SCRCMathMultiscriptsExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *base;
@property (retain, nonatomic) NSArray *preScripts;
@property (retain, nonatomic) NSArray *postScripts;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_appendString:(id)a0 toDescription:(id)a1 arePausesAllowed:(BOOL)a2;
- (void)_subSuperScriptsDescriptionFromArray:(id)a0 withSpeakingStyle:(long long)a1 arePausesAllowed:(BOOL)a2 outSubscripts:(id *)a3 outSuperscripts:(id *)a4;
- (id)_subSuperscriptPairFromDictionary:(id)a0;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;

@end
