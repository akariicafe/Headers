@class CATState, NSString, NSMutableDictionary;

@interface CATStateMachine : NSObject {
    NSMutableDictionary *mStateByName;
    NSString *mCalloutReason;
}

@property (retain, nonatomic) CATState *currentState;
@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) CATState *initialState;
@property (readonly, weak, nonatomic) id target;
@property (nonatomic) unsigned long long logLevel;

+ (id)new;

- (void)addState:(id)a0;
- (id)init;
- (void)delegateWillExitState:(id)a0 event:(id)a1;
- (void)dealloc;
- (void)start;
- (id)eventForTriggeringEvent:(id)a0;
- (void)invokeAction:(SEL)a0 event:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)addStateWithName:(id)a0;
- (void)delegateDidEnterState:(id)a0 event:(id)a1;
- (id)initWithTarget:(id)a0;
- (void)transitionWithTriggeringEvent:(id)a0;
- (id)stateWithName:(id)a0;
- (BOOL)canTransitionWithTriggeringEvent:(id)a0;

@end
