@class NSData;

@interface MHSchemaMHLatticeFalseTriggerMitigationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char threshold : 1; } _has;
}

@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) float threshold;
@property (nonatomic) BOOL hasThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteThreshold;
- (void)deleteScore;

@end
