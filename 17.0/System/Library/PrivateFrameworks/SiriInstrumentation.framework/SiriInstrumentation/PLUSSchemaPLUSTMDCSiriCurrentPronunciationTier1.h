@class NSString, NSData;

@interface PLUSSchemaPLUSTMDCSiriCurrentPronunciationTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char source : 1; } _has;
}

@property (copy, nonatomic) NSString *phonemes;
@property (nonatomic) BOOL hasPhonemes;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasSource;
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
- (void)deletePhonemes;
- (void)deleteSource;

@end
