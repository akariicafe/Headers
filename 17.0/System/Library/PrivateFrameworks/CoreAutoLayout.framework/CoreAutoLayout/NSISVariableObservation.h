@class NSISVariable;

@interface NSISVariableObservation : NSObject {
    NSISVariableObservation *_nextDirtyObservation;
    NSISVariableObservation *_prevDirtyObservation;
    NSISVariable *_variable;
    double _lastValue;
    BOOL _valueIsDirtied;
}

- (void)dealloc;
- (void)emitValueIfNeededWithEngine:(id)a0;
- (id)initWithVariable:(id)a0;
- (void)valueWasDirtied;

@end
