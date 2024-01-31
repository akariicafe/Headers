@class NSData;

@interface IDENTITYSchemaIDENTITYAskUserForDisambiguationDecisionReported : SISchemaInstrumentationMessage {
    struct { unsigned char isUserDisambiguationSkipped : 1; } _has;
}

@property (nonatomic) BOOL isUserDisambiguationSkipped;
@property (nonatomic) BOOL hasIsUserDisambiguationSkipped;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsUserDisambiguationSkipped;

@end
