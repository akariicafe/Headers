@class NSString;

@interface ASItemOperationsFetchAttachmentProperties : ASItem

@property (retain, nonatomic) NSString *attachmentContentType;
@property (retain, nonatomic) NSString *data;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void).cxx_destruct;

@end
