@class NSData;

@interface NLXSchemaCDMParser : SISchemaInstrumentationMessage {
    struct { unsigned char algorithm : 1; unsigned char parserId : 1; } _has;
}

@property (nonatomic) int algorithm;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) int parserId;
@property (nonatomic) BOOL hasParserId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAlgorithm;
- (void)deleteParserId;

@end
