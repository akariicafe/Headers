@class NSRegularExpression, NSMutableDictionary;

@interface PLAccountingDistributionRuleManager : PLAccountingRuleManager {
    NSRegularExpression *_regex;
}

@property (retain, nonatomic) NSMutableDictionary *rootNodeIDToNodeIDToDistributionRule;
@property (retain, nonatomic) NSMutableDictionary *distributionIDToDistributionRules;

+ (id)sharedInstance;
+ (id)rulesPath;
+ (id)rulesEntryKey;

- (id)regex;
- (void)setRegex:(id)a0;
- (id)ruleWithString:(id)a0 withEntryDate:(id)a1;
- (void)indexRule:(id)a0;
- (id)distributionRulesForDistributionID:(id)a0;
- (void).cxx_destruct;
- (id)distributionRuleForRootNodeID:(id)a0 andNodeID:(id)a1;

@end
