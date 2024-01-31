@class NSRegularExpression, NSMutableDictionary;

@interface PLAccountingRuleManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ruleIDToRule;
@property (retain, nonatomic) NSRegularExpression *regex;

+ (id)sharedInstance;
+ (id)rulesPath;
+ (id)rulesEntryKey;
+ (id)decryptData:(id)a0 withKey:(id)a1;
+ (id)firstLineWithFile:(id)a0;
+ (id)storedHashDefaults;

- (id)init;
- (id)ruleWithString:(id)a0 withEntryDate:(id)a1;
- (void)indexRule:(id)a0;
- (void).cxx_destruct;
- (void)loadRules;
- (id)ruleForRuleID:(id)a0;
- (id)rulesFromFileWithForceLoad:(BOOL)a0;

@end
