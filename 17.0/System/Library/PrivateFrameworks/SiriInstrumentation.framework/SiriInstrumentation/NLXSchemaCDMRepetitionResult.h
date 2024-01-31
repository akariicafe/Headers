@class NSData;

@interface NLXSchemaCDMRepetitionResult : SISchemaInstrumentationMessage {
    struct { unsigned char asrHypothesisIndex : 1; unsigned char repetitionType : 1; } _has;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (nonatomic) int repetitionType;
@property (nonatomic) BOOL hasRepetitionType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAsrHypothesisIndex;
- (void)deleteRepetitionType;

@end
