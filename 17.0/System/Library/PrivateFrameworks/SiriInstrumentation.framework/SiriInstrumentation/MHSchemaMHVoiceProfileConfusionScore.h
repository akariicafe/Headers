@class NSString, NSData;

@interface MHSchemaMHVoiceProfileConfusionScore : SISchemaInstrumentationMessage {
    struct { unsigned char similarityScore : 1; } _has;
}

@property (copy, nonatomic) NSString *homeMemberUserId;
@property (nonatomic) BOOL hasHomeMemberUserId;
@property (nonatomic) unsigned int similarityScore;
@property (nonatomic) BOOL hasSimilarityScore;
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
- (void)deleteHomeMemberUserId;
- (void)deleteSimilarityScore;

@end
