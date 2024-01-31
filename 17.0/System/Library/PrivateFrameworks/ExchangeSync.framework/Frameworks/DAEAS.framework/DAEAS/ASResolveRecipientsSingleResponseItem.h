@class NSString, NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsSingleResponseItem : ASItem

@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic, setter=setEASStatus:) NSNumber *easStatus;
@property (retain, nonatomic) NSMutableArray *mRecipients;
@property (readonly, nonatomic) NSArray *recipients;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)addRecipient:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
