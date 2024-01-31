@class NSData;

@interface CLPInstSchemaCLPNLv4TaskEvaluationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char accuracyOnTheFirstUserParseCount : 1; unsigned char accuracyOnAnyUserParse : 1; unsigned char evaluationCount : 1; } _has;
}

@property (nonatomic) double accuracyOnTheFirstUserParseCount;
@property (nonatomic) BOOL hasAccuracyOnTheFirstUserParseCount;
@property (nonatomic) double accuracyOnAnyUserParse;
@property (nonatomic) BOOL hasAccuracyOnAnyUserParse;
@property (nonatomic) unsigned int evaluationCount;
@property (nonatomic) BOOL hasEvaluationCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAccuracyOnAnyUserParse;
- (void)deleteAccuracyOnTheFirstUserParseCount;
- (void)deleteEvaluationCount;

@end
