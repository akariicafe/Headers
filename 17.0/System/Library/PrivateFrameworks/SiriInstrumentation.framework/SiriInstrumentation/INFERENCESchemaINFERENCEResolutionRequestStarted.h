@class INFERENCESchemaINFERENCEResolverConfig, NSData;

@interface INFERENCESchemaINFERENCEResolutionRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char slotType : 1; } _has;
}

@property (nonatomic) int slotType;
@property (nonatomic) BOOL hasSlotType;
@property (retain, nonatomic) INFERENCESchemaINFERENCEResolverConfig *resolverConfig;
@property (nonatomic) BOOL hasResolverConfig;
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
- (void)deleteResolverConfig;
- (void)deleteSlotType;

@end
