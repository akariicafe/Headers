@class NSArray, NSMutableArray;

@interface AXSSDocumentTextRulesetManager : NSObject

@property (retain, nonatomic) NSMutableArray *_rulesets;
@property (readonly, copy, nonatomic) NSArray *rulesets;

+ (id)sharedManager;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_loadCustomRulesets;
- (void)loadRulesets;

@end
