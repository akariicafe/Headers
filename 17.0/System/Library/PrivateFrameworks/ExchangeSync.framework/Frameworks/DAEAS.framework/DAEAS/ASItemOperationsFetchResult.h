@class NSString;

@interface ASItemOperationsFetchResult : ASEmailItem

@property (retain, nonatomic) NSString *classString;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isSearchResult;

@end
