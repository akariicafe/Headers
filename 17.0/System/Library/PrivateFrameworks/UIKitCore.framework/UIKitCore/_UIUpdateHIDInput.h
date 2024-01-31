@class NSMutableArray;

@interface _UIUpdateHIDInput : NSObject <_UIUpdateHIDAbstractInput> {
    struct _UIUpdateInputInternal { struct _UIUpdateInputState { int mode; unsigned long long earliestModelTime; unsigned long long latestModelTime; } _state; unsigned int _flags; struct _UIUpdateInputAlignmentShift { long long shiftDuration; } _alignments[2]; struct _UIUpdateInputSet *_set; struct { struct _UIUpdateInputInternal *le_next; struct _UIUpdateInputInternal **le_prev; } _setEntry; void /* function */ *_readyForModelTimeCallback; void *_context; char *_name; } _input;
    NSMutableArray *_events;
}

- (id)init;
- (void).cxx_destruct;
- (void)addEvent:(struct __IOHIDEvent { } *)a0;
- (void)removeEvent:(struct __IOHIDEvent { } *)a0;
- (struct __IOHIDEvent { } *)stopEventForModelTime:(unsigned long long)a0 alignment:(int)a1;

@end
