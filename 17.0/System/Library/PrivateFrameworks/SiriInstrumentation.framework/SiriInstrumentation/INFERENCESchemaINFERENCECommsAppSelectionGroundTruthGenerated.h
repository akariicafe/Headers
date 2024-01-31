@class NSArray, INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals, NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals *inferenceCommsAppSelectionTrainingAppIndependentSignals;
@property (nonatomic) BOOL hasInferenceCommsAppSelectionTrainingAppIndependentSignals;
@property (copy, nonatomic) NSArray *inferenceCommsAppSelectionTrainingAppDependentSignals;
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
- (void)addInferenceCommsAppSelectionTrainingAppDependentSignals:(id)a0;
- (void)clearInferenceCommsAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceCommsAppSelectionTrainingAppDependentSignals;
- (void)deleteInferenceCommsAppSelectionTrainingAppIndependentSignals;
- (id)inferenceCommsAppSelectionTrainingAppDependentSignalsAtIndex:(unsigned long long)a0;
- (unsigned long long)inferenceCommsAppSelectionTrainingAppDependentSignalsCount;

@end
