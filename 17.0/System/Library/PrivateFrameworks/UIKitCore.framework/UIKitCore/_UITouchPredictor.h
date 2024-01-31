@class NSMutableArray, _UIValuePredictor;

@interface _UITouchPredictor : NSObject <NSCopying> {
    NSMutableArray *_predictions;
    BOOL _predictionsValid;
    _UIValuePredictor *_xValuePredictor;
    _UIValuePredictor *_yValuePredictor;
    _UIValuePredictor *_angleValuePredictor;
    _UIValuePredictor *_azimuthValuePredictor;
    _UIValuePredictor *_forceValuePredictor;
    double _averageTouchInterval;
    double _lastTouchTimestamp;
    double _numPredictionsBuffer[5];
    long long _numPredictionsBufferCount;
}

- (id)init;
- (id)predictedTouchesForTouch:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_dampenedNumPredictionsAtIndex:(unsigned long long)a0;
- (id)_angleValuePredictor;
- (id)_azimuthValuePredictor;
- (id)_forceValuePredictor;
- (unsigned long long)_numPredictionsAtIndex:(unsigned long long)a0 hardLimit:(unsigned long long *)a1;
- (id)_predictedTouchesAtIndex:(unsigned long long)a0 forTouch:(id)a1;
- (void)_updatePredictionsForTouch:(id)a0 weight:(double)a1;
- (id)_xValuePredictor;
- (id)_yValuePredictor;
- (void)addTouch:(id)a0;
- (id)descriptionFromIndex:(int)a0 toIndex:(int)a1 includeHeader:(BOOL)a2 includeDetailedConfidence:(BOOL)a3;
- (id)initWithTouchPredictor:(id)a0;

@end
