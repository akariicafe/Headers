@class NSMutableSet;

@interface CoreDAVMkcolResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *propStats;

+ (id)copyParseRules;

- (id)init;
- (void)addPropStat:(id)a0;
- (BOOL)hasPropertyError;
- (id)description;
- (void).cxx_destruct;

@end
