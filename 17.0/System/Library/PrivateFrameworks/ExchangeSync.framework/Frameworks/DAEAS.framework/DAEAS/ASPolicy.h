@class NSString;

@interface ASPolicy : ASItem {
    NSString *_type;
    NSString *_key;
    NSString *_status;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)_setStatus:(id)a0;
- (int)status;
- (void)_setType:(id)a0;
- (id)key;
- (id)description;
- (void).cxx_destruct;
- (id)type;
- (void)_setKey:(id)a0;
- (id)perDomainDictsForPolicy;

@end
