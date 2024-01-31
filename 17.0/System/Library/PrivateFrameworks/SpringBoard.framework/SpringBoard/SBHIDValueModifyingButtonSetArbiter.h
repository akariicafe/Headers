@class NSDictionary, BSAbsoluteMachTimer, SBHIDButtonStateArbiter;
@protocol SBHIDValueModifyingButtonSetArbiterDelegate;

@interface SBHIDValueModifyingButtonSetArbiter : NSObject <SBHIDButtonStateDelegate> {
    NSDictionary *_usageToButtonDictionary;
    NSDictionary *_buttonToUsageDictionary;
    BSAbsoluteMachTimer *_timer;
    SBHIDButtonStateArbiter *_currentDownButton;
}

@property (nonatomic) double initialRepeatDelay;
@property (nonatomic) double subsequentRepeatDelay;
@property (weak, nonatomic) id<SBHIDValueModifyingButtonSetArbiterDelegate> delegate;

- (void)reset;
- (void)dealloc;
- (void)performActionsForButtonUp:(id)a0;
- (void)performActionsForButtonDown:(id)a0;
- (void)performActionsForButtonLongPress:(id)a0;
- (void).cxx_destruct;
- (BOOL)processKeyboardEvent:(struct __IOHIDEvent { } *)a0;
- (void)_invalidateRepeatingActionTimer;
- (void)_fireRepeatingActionTimer;
- (void)_performActionForButton:(id)a0;
- (void)_startRepeatingActionTimer;
- (id)initWithHIDKeyPressEventUsages:(id)a0 initialRepeatDelay:(double)a1 subsequentRepeatDelay:(double)a2;

@end
