@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSContactSuggestionOutcomeReported : SISchemaInstrumentationMessage {
    struct { unsigned char contactSuggestionOutcome : 1; unsigned char contactSuggestionRedundancyState : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *suggestionId;
@property (nonatomic) BOOL hasSuggestionId;
@property (nonatomic) int contactSuggestionOutcome;
@property (nonatomic) BOOL hasContactSuggestionOutcome;
@property (nonatomic) int contactSuggestionRedundancyState;
@property (nonatomic) BOOL hasContactSuggestionRedundancyState;
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
- (void)deleteContactSuggestionOutcome;
- (void)deleteContactSuggestionRedundancyState;
- (void)deleteSuggestionId;

@end
