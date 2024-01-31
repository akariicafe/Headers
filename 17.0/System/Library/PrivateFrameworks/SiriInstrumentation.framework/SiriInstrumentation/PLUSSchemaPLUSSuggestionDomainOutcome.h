@class PLUSSchemaPLUSMediaSuggestionOutcome, NSData;

@interface PLUSSchemaPLUSSuggestionDomainOutcome : SISchemaInstrumentationMessage

@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestionOutcome *mediaOutcome;
@property (nonatomic) BOOL hasMediaOutcome;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDomainsuggestionoutcome;

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
- (void)deleteMediaOutcome;

@end
