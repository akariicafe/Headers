@class NSMutableArray;

@interface IKCSSRuleList : NSObject {
    NSMutableArray *rules;
}

- (id)init;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (void)addRule:(id)a0;
- (id)firstRule;
- (id)lastRule;
- (id)ruleAtIndex:(unsigned long long)a0;

@end
