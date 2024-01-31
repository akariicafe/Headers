@class NSData;

@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationDependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char isDisambiguatedApp : 1; unsigned char modelAppConfidence : 1; unsigned char disambiguationAppOrdinal : 1; } _has;
}

@property (nonatomic) BOOL isDisambiguatedApp;
@property (nonatomic) BOOL hasIsDisambiguatedApp;
@property (nonatomic) int modelAppConfidence;
@property (nonatomic) BOOL hasModelAppConfidence;
@property (nonatomic) int disambiguationAppOrdinal;
@property (nonatomic) BOOL hasDisambiguationAppOrdinal;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDisambiguationAppOrdinal;
- (void)deleteIsDisambiguatedApp;
- (void)deleteModelAppConfidence;

@end
