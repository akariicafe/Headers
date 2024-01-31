@class NSString, TTSRegex, NSNumber, NSMutableArray;

@interface TTSRuleset : NSObject

@property (retain, nonatomic) TTSRegex *activationRegex;
@property (readonly, nonatomic) NSNumber *ruleCount;
@property (nonatomic) unsigned long long priority;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *ruleReplacements;

+ (id)processReplacementStringForSpecialCharacters:(id)a0;
+ (id)rulesetWithData:(id)a0 identifier:(id)a1 priority:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (void)addRules:(id)a0;
- (void)addRuleReplacement:(id)a0;
- (void)addRuleString:(id)a0;
- (void)addRulesFromData:(id)a0;

@end
