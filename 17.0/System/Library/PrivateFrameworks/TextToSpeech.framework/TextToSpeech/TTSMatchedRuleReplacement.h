@class TTSRegexMatch, NSString, TTSRuleReplacement;

@interface TTSMatchedRuleReplacement : NSObject

@property (retain, nonatomic) TTSRegexMatch *match;
@property (retain, nonatomic) NSString *replacement;
@property (weak, nonatomic) TTSRuleReplacement *ruleReplacement;

- (void).cxx_destruct;

@end
