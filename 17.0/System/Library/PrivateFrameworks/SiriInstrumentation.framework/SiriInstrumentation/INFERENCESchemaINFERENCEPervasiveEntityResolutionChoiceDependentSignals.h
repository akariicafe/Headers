@class NSData;

@interface INFERENCESchemaINFERENCEPervasiveEntityResolutionChoiceDependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char choice : 1; unsigned char isUserSelectedChoice : 1; unsigned char isModelPredictedChoice : 1; unsigned char frequencyPercentage : 1; unsigned char recencySeconds : 1; unsigned char recencyRank : 1; unsigned char lastContiguousCount : 1; unsigned char locationAffinity300Meters : 1; unsigned char locationAffinity2500Meters : 1; unsigned char locationAffinity156Kilometers : 1; unsigned char locationFrequencyCount300Meters : 1; unsigned char locationFrequencyCount2500Meters : 1; unsigned char locationFrequencyCount156Kilometers : 1; } _has;
}

@property (nonatomic) long long choice;
@property (nonatomic) BOOL hasChoice;
@property (nonatomic) int isUserSelectedChoice;
@property (nonatomic) BOOL hasIsUserSelectedChoice;
@property (nonatomic) int isModelPredictedChoice;
@property (nonatomic) BOOL hasIsModelPredictedChoice;
@property (nonatomic) float frequencyPercentage;
@property (nonatomic) BOOL hasFrequencyPercentage;
@property (nonatomic) int recencySeconds;
@property (nonatomic) BOOL hasRecencySeconds;
@property (nonatomic) int recencyRank;
@property (nonatomic) BOOL hasRecencyRank;
@property (nonatomic) int lastContiguousCount;
@property (nonatomic) BOOL hasLastContiguousCount;
@property (nonatomic) float locationAffinity300Meters;
@property (nonatomic) BOOL hasLocationAffinity300Meters;
@property (nonatomic) float locationAffinity2500Meters;
@property (nonatomic) BOOL hasLocationAffinity2500Meters;
@property (nonatomic) float locationAffinity156Kilometers;
@property (nonatomic) BOOL hasLocationAffinity156Kilometers;
@property (nonatomic) long long locationFrequencyCount300Meters;
@property (nonatomic) BOOL hasLocationFrequencyCount300Meters;
@property (nonatomic) long long locationFrequencyCount2500Meters;
@property (nonatomic) BOOL hasLocationFrequencyCount2500Meters;
@property (nonatomic) long long locationFrequencyCount156Kilometers;
@property (nonatomic) BOOL hasLocationFrequencyCount156Kilometers;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLocationAffinity300Meters;
- (void)deleteChoice;
- (void)deleteFrequencyPercentage;
- (void)deleteIsModelPredictedChoice;
- (void)deleteIsUserSelectedChoice;
- (void)deleteLastContiguousCount;
- (void)deleteLocationAffinity156Kilometers;
- (void)deleteLocationAffinity2500Meters;
- (void)deleteLocationFrequencyCount156Kilometers;
- (void)deleteLocationFrequencyCount2500Meters;
- (void)deleteLocationFrequencyCount300Meters;
- (void)deleteRecencyRank;
- (void)deleteRecencySeconds;

@end
