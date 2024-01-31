@class NSString, NSNumber;

@interface ASMeetingResponseSingularResponse : ASItem

@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSString *instanceId;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)description;
- (void).cxx_destruct;

@end
