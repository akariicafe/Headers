@class NSData;

@interface POMMESSchemaPOMMESServiceClassifierScoreReported : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char classifierLabel : 1; } _has;
}

@property (nonatomic) double score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) int classifierLabel;
@property (nonatomic) BOOL hasClassifierLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteClassifierLabel;
- (void)deleteScore;

@end
