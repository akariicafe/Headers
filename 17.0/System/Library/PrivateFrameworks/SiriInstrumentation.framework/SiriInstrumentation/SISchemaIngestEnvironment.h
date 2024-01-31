@class NSData;

@interface SISchemaIngestEnvironment : SISchemaInstrumentationMessage {
    struct { unsigned char buildVariant : 1; } _has;
}

@property (nonatomic) int buildVariant;
@property (nonatomic) BOOL hasBuildVariant;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBuildVariant;

@end
