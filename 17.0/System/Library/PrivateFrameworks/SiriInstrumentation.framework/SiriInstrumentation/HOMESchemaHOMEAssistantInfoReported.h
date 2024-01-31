@class NSData, SISchemaUUID;

@interface HOMESchemaHOMEAssistantInfoReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *hashedHomeId;
@property (nonatomic) BOOL hasHashedHomeId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHashedHomeId;

@end
