@class NSData;

@interface SISchemaConversationTrace : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *previousTurnID;
@property (nonatomic) BOOL hasPreviousTurnID;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePreviousTurnID;

@end
