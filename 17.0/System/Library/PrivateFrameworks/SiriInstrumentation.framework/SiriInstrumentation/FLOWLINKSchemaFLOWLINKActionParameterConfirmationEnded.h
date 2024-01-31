@class NSData;

@interface FLOWLINKSchemaFLOWLINKActionParameterConfirmationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isCorrectParameter : 1; } _has;
}

@property (nonatomic) BOOL isCorrectParameter;
@property (nonatomic) BOOL hasIsCorrectParameter;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsCorrectParameter;

@end
