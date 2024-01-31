@class SISchemaInstrumentationMessage, DUSchemaDUSpeechAudioRecord, DUSchemaDUSearchSessionRecord, DUSchemaDUEventMetadata, NSData, DUSchemaDUContent;

@interface DUSchemaDUEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) DUSchemaDUEventMetadata *metadata;
@property (nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) DUSchemaDUContent *content;
@property (nonatomic) BOOL hasContent;
@property (retain, nonatomic) DUSchemaDUSpeechAudioRecord *speechAudioRecord;
@property (nonatomic) BOOL hasSpeechAudioRecord;
@property (retain, nonatomic) DUSchemaDUSearchSessionRecord *searchSessionRecord;
@property (nonatomic) BOOL hasSearchSessionRecord;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (int)getAnyEventType;
- (unsigned long long)hash;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteContent;
- (void)deleteMetadata;
- (void)deleteSearchSessionRecord;
- (void)deleteSpeechAudioRecord;

@end
