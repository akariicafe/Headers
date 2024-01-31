@class CAMediaTimingFunction;

@interface _SBIconProgressPausedTransition : _SBIconProgressTransition {
    double _totalElapsedTime;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    BOOL _toPaused;
    double _fraction;
}

+ (id)newTransitionToPaused:(BOOL)a0;

- (void).cxx_destruct;
- (void)updateToPaused:(BOOL)a0;
- (id)_initToPaused:(BOOL)a0;
- (void)_updateElapsedTimeFromFraction;
- (void)_updateTimingFunction;
- (void)_updateView:(id)a0;
- (void)completeTransitionAndUpdateView:(id)a0;
- (BOOL)isCompleteWithView:(id)a0;
- (void)updateView:(id)a0 withElapsedTime:(double)a1;

@end
