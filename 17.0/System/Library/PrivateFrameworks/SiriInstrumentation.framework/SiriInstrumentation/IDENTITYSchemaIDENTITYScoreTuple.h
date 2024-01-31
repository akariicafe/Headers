@class NSString, NSData;

@interface IDENTITYSchemaIDENTITYScoreTuple : SISchemaInstrumentationMessage {
    struct { unsigned char confidenceScore : 1; } _has;
}

@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) BOOL hasLoggableSharedUserId;
@property (nonatomic) unsigned int confidenceScore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfidenceScore;
- (void)deleteLoggableSharedUserId;

@end
