@class NSData;

@interface FLOWLINKSchemaFLOWLINKActionExecutionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char hasOutputToPresent : 1; } _has;
}

@property (nonatomic) BOOL hasOutputToPresent;
@property (nonatomic) BOOL hasHasOutputToPresent;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasOutputToPresent;

@end
