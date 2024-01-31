@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionDetectorEndedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mentionDetectorSpansTier1s;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (void)deleteMentionDetectorSpansTier1;
- (void)addMentionDetectorSpansTier1:(id)a0;
- (void)clearMentionDetectorSpansTier1;
- (void)deleteLinkId;
- (id)mentionDetectorSpansTier1AtIndex:(unsigned long long)a0;
- (unsigned long long)mentionDetectorSpansTier1Count;

@end
