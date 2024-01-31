@class NSData;

@interface SUGSchemaSUGSuppressionResult : SISchemaInstrumentationMessage {
    struct { unsigned char wasSuppressed : 1; unsigned char suppressionReason : 1; } _has;
}

@property (nonatomic) BOOL wasSuppressed;
@property (nonatomic) BOOL hasWasSuppressed;
@property (nonatomic) int suppressionReason;
@property (nonatomic) BOOL hasSuppressionReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSuppressionReason;
- (void)deleteWasSuppressed;

@end
