@class NSArray, NSData, INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppIndependentSignals;

@interface INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppIndependentSignals *independentSignal;
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
- (id)dependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)dependentSignalsCount;

@end
