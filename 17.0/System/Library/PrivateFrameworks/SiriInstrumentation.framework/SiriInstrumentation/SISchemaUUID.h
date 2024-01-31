@class NSData;

@interface SISchemaUUID : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *value;
@property (nonatomic) BOOL hasValue;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithNSUUID:(id)a0;
- (id)dictionaryRepresentation;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)toSafeNSUUID;
- (void)deleteValue;
- (id)initWithBytesAsData:(id)a0;
- (id)toNSUUID;

@end
