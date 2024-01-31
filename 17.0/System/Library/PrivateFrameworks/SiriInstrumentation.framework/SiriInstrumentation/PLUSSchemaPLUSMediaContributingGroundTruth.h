@class NSData;

@interface PLUSSchemaPLUSMediaContributingGroundTruth : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; unsigned char entityFeedbackType : 1; } _has;
}

@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int entityFeedbackType;
@property (nonatomic) BOOL hasEntityFeedbackType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEntityFeedbackType;
- (void)deleteSource;

@end
