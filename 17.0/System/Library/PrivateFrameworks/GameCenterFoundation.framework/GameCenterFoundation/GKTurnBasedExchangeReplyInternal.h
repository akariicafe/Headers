@class NSDictionary, NSData, NSDate;

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation

@property (nonatomic) unsigned char recipientIndex;
@property (retain, nonatomic) NSDictionary *localizableMessage;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDate *replyDate;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
