@class SISchemaUUID, NSData, NSArray, PEGASUSSchemaPEGASUSIntent, PEGASUSSchemaPEGASUSKGQAExecution, PEGASUSSchemaPEGASUSWebAnswerExecution, PEGASUSSchemaPEGASUSSportsExecution, PEGASUSSchemaPEGASUSMapsExecution, PEGASUSSchemaPEGASUSAudioExecution, PEGASUSSchemaPEGASUSCrossIntentRankerResponse;

@interface PEGASUSSchemaPEGASUSRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char productArea : 1; unsigned char primaryProvider : 1; unsigned char queryConfidenceScore : 1; unsigned char isFollowupResponse : 1; unsigned char isHandOffExecution : 1; } _has;
}

@property (nonatomic) BOOL exists;
@property (nonatomic) BOOL hasExists;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) int productArea;
@property (nonatomic) BOOL hasProductArea;
@property (nonatomic) int primaryProvider;
@property (nonatomic) BOOL hasPrimaryProvider;
@property (copy, nonatomic) NSArray *otherProviders;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSIntent *intent;
@property (nonatomic) BOOL hasIntent;
@property (nonatomic) float queryConfidenceScore;
@property (nonatomic) BOOL hasQueryConfidenceScore;
@property (nonatomic) BOOL isFollowupResponse;
@property (nonatomic) BOOL hasIsFollowupResponse;
@property (nonatomic) BOOL isHandOffExecution;
@property (nonatomic) BOOL hasIsHandOffExecution;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSCrossIntentRankerResponse *crossIntentRankerResponse;
@property (nonatomic) BOOL hasCrossIntentRankerResponse;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSKGQAExecution *kgQAExecution;
@property (nonatomic) BOOL hasKgQAExecution;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSWebAnswerExecution *webAnswerExecution;
@property (nonatomic) BOOL hasWebAnswerExecution;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSSportsExecution *sportsExecution;
@property (nonatomic) BOOL hasSportsExecution;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSMapsExecution *mapsExecution;
@property (nonatomic) BOOL hasMapsExecution;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAudioExecution *audioExecution;
@property (nonatomic) BOOL hasAudioExecution;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteExists;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCrossIntentRankerResponse;
- (void)addOtherProviders:(int)a0;
- (void)clearOtherProviders;
- (void)deleteAudioExecution;
- (void)deleteIntent;
- (void)deleteIsFollowupResponse;
- (void)deleteIsHandOffExecution;
- (void)deleteKgQAExecution;
- (void)deleteLinkId;
- (void)deleteMapsExecution;
- (void)deleteOtherProviders;
- (void)deletePrimaryProvider;
- (void)deleteProductArea;
- (void)deleteQueryConfidenceScore;
- (void)deleteSportsExecution;
- (void)deleteWebAnswerExecution;
- (int)otherProvidersAtIndex:(unsigned long long)a0;
- (unsigned long long)otherProvidersCount;

@end
