@class NSDictionary, NSNumber;

@interface ASTopLevelErrorChecker : ASItem <ASParsingNotifyOfUnknownTokens>

@property (retain, nonatomic) NSDictionary *parseRules;
@property (retain, nonatomic) NSNumber *foundStatus;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void).cxx_destruct;
- (id)asParseRules;
- (id)initWithCodePage:(int)a0 statusToken:(int)a1;
- (void)unknownToken:(int)a0 receivedForCodePage:(int)a1;

@end
