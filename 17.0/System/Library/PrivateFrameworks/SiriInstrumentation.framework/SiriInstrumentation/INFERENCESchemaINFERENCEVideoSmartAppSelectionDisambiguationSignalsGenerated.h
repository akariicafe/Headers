@class NSArray, NSData, INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals, INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated;

@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationSignalsGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated *playOnThirdPartyAppSignals;
@property (nonatomic) BOOL hasPlayOnThirdPartyAppSignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals *independentSignal;
@property (nonatomic) BOOL hasIndependentSignal;
@property (copy, nonatomic) NSArray *dependentSignals;
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
- (void)addDependentSignals:(id)a0;
- (void)clearDependentSignals;
- (void)deleteDependentSignals;
- (void)deleteIndependentSignal;
- (void)deletePlayOnThirdPartyAppSignals;
- (id)dependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)dependentSignalsCount;

@end
