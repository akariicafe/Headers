@class NSData;

@interface NLXSchemaMentionResolverSpanData : SISchemaInstrumentationMessage {
    struct { unsigned char jointScore : 1; unsigned char modelScore : 1; } _has;
}

@property (nonatomic) double jointScore;
@property (nonatomic) BOOL hasJointScore;
@property (nonatomic) double modelScore;
@property (nonatomic) BOOL hasModelScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteJointScore;
- (void)deleteModelScore;

@end
