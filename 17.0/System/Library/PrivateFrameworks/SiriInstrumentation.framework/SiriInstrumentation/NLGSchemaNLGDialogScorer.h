@class NSData;

@interface NLGSchemaNLGDialogScorer : SISchemaInstrumentationMessage {
    struct { unsigned char dialogScorerType : 1; } _has;
}

@property (nonatomic) int dialogScorerType;
@property (nonatomic) BOOL hasDialogScorerType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDialogScorerType;

@end
