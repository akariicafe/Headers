@class PDAnimationTarget;

@interface PDTimeCondition : NSObject {
    BOOL mHasDelay;
    int mDelay;
    BOOL mHasTriggerEvent;
    int mTriggerEvent;
    PDAnimationTarget *mTarget;
}

- (int)triggerEvent;
- (id)init;
- (void)setDelay:(int)a0;
- (int)delay;
- (id)target;
- (id)description;
- (void)setTriggerEvent:(int)a0;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasDelay;
- (BOOL)hasTriggerEvent;
- (int)writeDelay;

@end
