@class NSData;

@interface ANCSchemaANCAppNotificationMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char commsNotificationType : 1; unsigned char isSmsEligible : 1; unsigned char isAskWithSiriEnabled : 1; } _has;
}

@property (nonatomic) int commsNotificationType;
@property (nonatomic) BOOL hasCommsNotificationType;
@property (nonatomic) BOOL isSmsEligible;
@property (nonatomic) BOOL hasIsSmsEligible;
@property (nonatomic) BOOL isAskWithSiriEnabled;
@property (nonatomic) BOOL hasIsAskWithSiriEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCommsNotificationType;
- (void)deleteIsAskWithSiriEnabled;
- (void)deleteIsSmsEligible;

@end
