@class NSArray, NSString, NSData, SISchemaUUID;

@interface SUGSchemaSUGSuggestionsGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char invocationType : 1; } _has;
}

@property (copy, nonatomic) NSArray *suggestions;
@property (nonatomic) int invocationType;
@property (nonatomic) BOOL hasInvocationType;
@property (retain, nonatomic) SISchemaUUID *generationId;
@property (nonatomic) BOOL hasGenerationId;
@property (copy, nonatomic) NSString *generationTag;
@property (nonatomic) BOOL hasGenerationTag;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (void)clearSuggestions;
- (BOOL)readFrom:(id)a0;
- (void)addSuggestions:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionsCount;
- (id)initWithJSON:(id)a0;
- (void)deleteGenerationId;
- (void)deleteGenerationTag;
- (void)deleteInvocationType;
- (void)deleteSuggestions;

@end
