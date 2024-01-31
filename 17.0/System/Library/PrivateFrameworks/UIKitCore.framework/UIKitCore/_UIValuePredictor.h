@interface _UIValuePredictor : NSObject <NSCopying> {
    unsigned long long _capacity;
    unsigned long long _arrayCapacity;
    double *_values;
    double *_valueWeights;
    double *_predictions;
    double *_confidenceFactorsForVelocity;
    double *_confidenceFactorsForHistoricalAccuracy;
    double *_confidenceFactorsForDerivativeStability;
    double *_confidenceFactors;
    double **_derivatives;
}

@property (nonatomic) double minHistoricalAccuracyThreshold;
@property (nonatomic) double maxHistoricalAccuracyThreshold;
@property (nonatomic) double derivativeStabilityThreshold;
@property (nonatomic) double minVelocityThreshold;
@property (nonatomic) double maxVelocityThreshold;
@property (nonatomic) double minConstraint;
@property (nonatomic) double maxConstraint;
@property (nonatomic) BOOL wrapConstraint;
@property (readonly, nonatomic) unsigned long long numValues;
@property (readonly, nonatomic) unsigned long long numPredictions;
@property (readonly, nonatomic) unsigned long long numDerivatives;

- (double *)predictions;
- (id)init;
- (void)dealloc;
- (void)_ensureCapacity:(unsigned long long)a0;
- (id)description;
- (void)_setupDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double *)_valuesAtIndex:(unsigned long long)a0;
- (double *)_confidenceFactorsAtIndex:(unsigned long long)a0;
- (double *)_confidenceFactorsForDerivativeStabilityAtIndex:(unsigned long long)a0;
- (double *)_confidenceFactorsForHistoricalAccuracyAtIndex:(unsigned long long)a0;
- (double *)_confidenceFactorsForVelocityAtIndex:(unsigned long long)a0;
- (double)_constrainPrediction:(double)a0;
- (double **)_derivatives;
- (void)_getPriorPredictions:(double *)a0 forValueAtIndex:(int)a1;
- (double *)_predictionsAtIndex:(unsigned long long)a0;
- (void)_propagateDerivatives:(double *)a0 fromHigherDerivatives:(double *)a1 atIndex:(long long)a2;
- (void)_slideDataWindow;
- (void)_updateConfidenceFactorsAtIndex:(int)a0;
- (void)_updateConfidenceFactorsForDerivativeStabilityAtIndex:(int)a0;
- (void)_updateConfidenceFactorsForHistoricalAccuracyAtIndex:(int)a0;
- (void)_updateConfidenceFactorsForVelocityAtIndex:(long long)a0;
- (void)_updateDerivatives:(double *)a0 fromArray:(double *)a1 weights:(double *)a2 atIndex:(long long)a3 wrap:(BOOL)a4;
- (void)_updatePredictionsAtIndex:(long long)a0;
- (double *)_valueWeightsAtIndex:(unsigned long long)a0;
- (void)addValue:(double)a0 weight:(double)a1;
- (double *)confidenceFactors;
- (id)descriptionFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 includeHeader:(BOOL)a2 includeDetailedConfidence:(BOOL)a3;
- (id)initFromValuePredictor:(id)a0;
- (id)initWithNumPredictions:(unsigned long long)a0 numDerivatives:(unsigned long long)a1;

@end
