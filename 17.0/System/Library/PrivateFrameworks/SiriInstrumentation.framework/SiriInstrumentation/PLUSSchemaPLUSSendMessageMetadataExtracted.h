@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSSendMessageMetadataExtracted : SISchemaInstrumentationMessage {
    struct { unsigned char initialSendMessageRequestNumberOfContacts : 1; unsigned char initialSendMessageRequestHasPayload : 1; unsigned char numberOfTimesMessageContactChanged : 1; unsigned char numberOfTimesMessagePayloadChanged : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) BOOL hasOriginalPlusId;
@property (nonatomic) unsigned int initialSendMessageRequestNumberOfContacts;
@property (nonatomic) BOOL hasInitialSendMessageRequestNumberOfContacts;
@property (nonatomic) BOOL initialSendMessageRequestHasPayload;
@property (nonatomic) BOOL hasInitialSendMessageRequestHasPayload;
@property (nonatomic) unsigned int numberOfTimesMessageContactChanged;
@property (nonatomic) BOOL hasNumberOfTimesMessageContactChanged;
@property (nonatomic) unsigned int numberOfTimesMessagePayloadChanged;
@property (nonatomic) BOOL hasNumberOfTimesMessagePayloadChanged;
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
- (void)deleteInitialSendMessageRequestHasPayload;
- (void)deleteInitialSendMessageRequestNumberOfContacts;
- (void)deleteNumberOfTimesMessageContactChanged;
- (void)deleteNumberOfTimesMessagePayloadChanged;
- (void)deleteOriginalPlusId;

@end
