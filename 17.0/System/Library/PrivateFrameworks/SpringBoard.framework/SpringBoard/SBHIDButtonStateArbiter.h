@class BSAbsoluteMachTimer;
@protocol SBHIDButtonStateDelegate;

@interface SBHIDButtonStateArbiter : NSObject {
    unsigned long long _previousUpTime;
    BOOL _recognizedLongPress;
    BSAbsoluteMachTimer *_longPressTimer;
    BSAbsoluteMachTimer *_repeatedPressTimer;
    unsigned long long _downEventSenderID;
    double _longPressTimeoutAtDownEvent;
    double _repeatedPressTimeoutAtUpEvent;
}

@property (readonly, nonatomic, getter=isLongPressDisabled) BOOL longPressDisabled;
@property (nonatomic) double longPressTimeout;
@property (readonly, nonatomic, getter=isRepeatedPressDisabled) BOOL repeatedPressDisabled;
@property (readonly, nonatomic) unsigned long long repeatedPressCount;
@property (nonatomic) unsigned long long maximumRepeatedPressCount;
@property (nonatomic) double repeatedPressTimeout;
@property (readonly, nonatomic) long long pressSequence;
@property (readonly, nonatomic) unsigned long long downTime;
@property (readonly, nonatomic) unsigned long long repeatedPressInitialDownTime;
@property (weak, nonatomic) id<SBHIDButtonStateDelegate> delegate;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (void)processEvent:(struct __IOHIDEvent { } *)a0;

@end
