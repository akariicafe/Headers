@class NSString, NSMutableArray, NSArray;

@interface AXSSDocumentTextRuleset : NSObject

@property (retain, nonatomic) NSMutableArray *_rules;
@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *allRules;

- (id)init;
- (void).cxx_destruct;
- (void)addRule:(id)a0;
- (id)rulesForGranularity:(long long)a0;

@end
