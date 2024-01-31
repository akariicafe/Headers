@class NSData, SISchemaUUID;

@interface SetupSchemaProvisionalSiriSetupEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *setupId;
@property (nonatomic) BOOL hasSetupId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSetupId;

@end
