@class NSArray, NSString, NSMutableArray, NSNumber;

@interface ASEnhancedSearchStoreResponse : ASItem

@property (retain, nonatomic) NSMutableArray *mResults;
@property (readonly, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *store;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *total;
@property (copy, nonatomic) NSString *range;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)description;
- (void).cxx_destruct;
- (void)addResult:(id)a0;

@end
