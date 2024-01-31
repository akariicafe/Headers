@interface ASBool : ASItem <ASParsingFrontingBasicType>

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)expectsContent;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (int)parsingState;
- (id)commonValue;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
