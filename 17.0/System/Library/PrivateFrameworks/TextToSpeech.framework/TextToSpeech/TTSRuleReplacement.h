@class NSString, TTSRegex, TTSRuleGroup, TTSRuleset;

@interface TTSRuleReplacement : NSObject

@property (retain, nonatomic) TTSRegex *regex;
@property (retain, nonatomic) NSString *replacement;
@property (copy, nonatomic) id /* block */ postMatch;
@property (nonatomic) BOOL isTerminalRule;
@property (weak, nonatomic) TTSRuleset *ruleset;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) TTSRuleGroup *group;

- (void).cxx_destruct;
- (unsigned long long)effectiveIndex;

@end
