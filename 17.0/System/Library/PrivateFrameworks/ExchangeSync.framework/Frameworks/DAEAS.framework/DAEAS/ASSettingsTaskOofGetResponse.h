@class NSString, NSArray, NSNumber, NSMutableArray;

@interface ASSettingsTaskOofGetResponse : ASItem

@property (retain, nonatomic) NSMutableArray *mOofMessages;
@property (retain, nonatomic) NSNumber *oofState;
@property (retain, nonatomic) NSString *startTime;
@property (retain, nonatomic) NSString *endTime;
@property (retain, nonatomic) NSArray *oofMessages;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)description;
- (void).cxx_destruct;
- (void)addOofMessages:(id)a0;
- (id)convertToDAOofParams;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
