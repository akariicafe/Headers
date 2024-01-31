@class NSArray, PLUSSchemaPLUSMediaSuggestionSource, NSData;

@interface PLUSSchemaPLUSMediaSuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char locality : 1; } _has;
}

@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestionSource *source;
@property (nonatomic) BOOL hasSource;
@property (copy, nonatomic) NSArray *contributingGroundTruths;
@property (nonatomic) int locality;
@property (nonatomic) BOOL hasLocality;
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
- (id)contributingGroundTruthAtIndex:(unsigned long long)a0;
- (void)addContributingGroundTruth:(id)a0;
- (void)clearContributingGroundTruth;
- (unsigned long long)contributingGroundTruthCount;
- (void)deleteContributingGroundTruth;
- (void)deleteLocality;
- (void)deleteSource;

@end
