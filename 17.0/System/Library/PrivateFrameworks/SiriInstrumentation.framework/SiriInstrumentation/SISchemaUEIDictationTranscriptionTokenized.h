@class NSData;

@interface SISchemaUEIDictationTranscriptionTokenized : SISchemaInstrumentationMessage {
    struct { unsigned char numTokens : 1; } _has;
}

@property (nonatomic) int numTokens;
@property (nonatomic) BOOL hasNumTokens;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNumTokens;

@end
