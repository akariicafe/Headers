@class NSString, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSMediaGroundTruth : SISchemaInstrumentationMessage {
    struct { unsigned char groundTruthSource : 1; unsigned char selectedMediaEntitylocality : 1; unsigned char inferredMediaEntitylocality : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *groundTruthId;
@property (nonatomic) BOOL hasGroundTruthId;
@property (nonatomic) int groundTruthSource;
@property (nonatomic) BOOL hasGroundTruthSource;
@property (copy, nonatomic) NSString *selectedMediaEntityAdamId;
@property (nonatomic) BOOL hasSelectedMediaEntityAdamId;
@property (copy, nonatomic) NSString *inferredMediaEntityAdamId;
@property (nonatomic) BOOL hasInferredMediaEntityAdamId;
@property (nonatomic) int selectedMediaEntitylocality;
@property (nonatomic) BOOL hasSelectedMediaEntitylocality;
@property (nonatomic) int inferredMediaEntitylocality;
@property (nonatomic) BOOL hasInferredMediaEntitylocality;
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
- (void)deleteInferredMediaEntityAdamId;
- (void)deleteSelectedMediaEntityAdamId;
- (void)deleteGroundTruthId;
- (void)deleteGroundTruthSource;
- (void)deleteInferredMediaEntitylocality;
- (void)deleteSelectedMediaEntitylocality;

@end
