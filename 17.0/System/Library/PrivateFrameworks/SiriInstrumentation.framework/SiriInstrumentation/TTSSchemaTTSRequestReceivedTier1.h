@class NSString, NSData, SISchemaUUID;

@interface TTSSchemaTTSRequestReceivedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *textToSynthesize;
@property (nonatomic) BOOL hasTextToSynthesize;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
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
- (void)deleteContextId;
- (void)deleteLinkId;
- (void)deleteTextToSynthesize;

@end
