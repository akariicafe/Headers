@class NSString, NSArray, NSDictionary, NSData, NSDate;

@interface GKTurnBasedExchangeInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *exchangeID;
@property (nonatomic) unsigned char senderIndex;
@property (retain, nonatomic) NSArray *recipientIndexes;
@property (retain, nonatomic) NSString *statusString;
@property (retain, nonatomic) NSDictionary *localizableMessage;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDate *sendDate;
@property (retain, nonatomic) NSDate *timeoutDate;
@property (retain, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) NSArray *replies;

+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
