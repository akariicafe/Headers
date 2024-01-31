@class NSDictionary, NSMutableArray;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {
    NSMutableArray *_items;
    NSDictionary *_subclassRuleSet;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)addItem:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)asParseRules;
- (id)commonValue;
- (id)initWithSubclassRuleSet:(id)a0;

@end
