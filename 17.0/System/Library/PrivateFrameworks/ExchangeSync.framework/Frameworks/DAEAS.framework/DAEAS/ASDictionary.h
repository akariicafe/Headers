@class NSDictionary, NSMutableDictionary;

@interface ASDictionary : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType, ASParsingAcceptingTopLevelLeaves> {
    NSMutableDictionary *_items;
    NSDictionary *_subclassRuleSet;
    NSMutableDictionary *_placeHolder;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)_setItems:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)applyPlaceHolder;
- (id)asParseRules;
- (void)clearPlaceHolder;
- (id)commonValue;
- (id)initWithSubclassRuleSet:(id)a0;
- (void)setObject:(id)a0 forDCCPT:(int)a1;

@end
