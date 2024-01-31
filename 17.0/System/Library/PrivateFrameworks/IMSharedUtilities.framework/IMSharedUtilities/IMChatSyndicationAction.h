@interface IMChatSyndicationAction : IMSyndicationAction

@property (readonly, nonatomic, getter=isAutoDonatingMessages) BOOL autoDonateMessages;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)autoSyndicateMessages;
- (id)initWithChatGUID:(id)a0 syndicationStartDate:(id)a1 autoDonateMessages:(BOOL)a2;
- (id)initWithChatGUID:(id)a0 syndicationStartDate:(id)a1 autoDonateMessages:(BOOL)a2 version:(unsigned char)a3;
- (id)initWithChatGUID:(id)a0 syndicationStartDate:(id)a1 deserializedSyndicationActionType:(unsigned char)a2 version:(unsigned char)a3;
- (unsigned char)syndicatedItemType;

@end
