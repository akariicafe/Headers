@class NSMutableArray, NSMutableSet;

@interface _UIUpdateHIDDigitizerInput : NSObject <_UIUpdateHIDAbstractInput> {
    struct _UIUpdateInputInternal { struct _UIUpdateInputState { int mode; unsigned long long earliestModelTime; unsigned long long latestModelTime; } _state; unsigned int _flags; struct _UIUpdateInputAlignmentShift { long long shiftDuration; } _alignments[2]; struct _UIUpdateInputSet *_set; struct { struct _UIUpdateInputInternal *le_next; struct _UIUpdateInputInternal **le_prev; } _setEntry; void /* function */ *_readyForModelTimeCallback; void *_context; char *_name; } _input;
    struct _UIUpdateInputTimingProfile { long long x0; long long x1; unsigned long long x2; BOOL x3; long long x4; BOOL x5; unsigned long long x6; unsigned long long x7; struct _UIUpdateInputReadyProfile *x8; struct _UIUpdateInputReadyProfile *x9; } *_profile;
    NSMutableArray *_events;
    NSMutableSet *_touches;
    long long _eventModelTimeDifferenceMin;
    long long _eventModelTimeDifferenceMax;
    long long _nextEventReceiveDeadlineTimeDifference;
    unsigned long long _eventPhaseTime;
    BOOL _nextEventExpected;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)addEvent:(struct __IOHIDEvent { } *)a0;
- (void)removeEvent:(struct __IOHIDEvent { } *)a0;
- (struct __IOHIDEvent { } *)stopEventForModelTime:(unsigned long long)a0 alignment:(int)a1;

@end
