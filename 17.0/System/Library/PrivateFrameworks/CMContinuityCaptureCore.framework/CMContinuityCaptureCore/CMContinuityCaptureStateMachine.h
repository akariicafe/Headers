@class CMContinuityCaptureState, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CMContinuityCaptureStateMachineActionDelegate;

@interface CMContinuityCaptureStateMachine : NSObject {
    NSMutableArray *_transactions;
    NSMutableArray *_previousStates;
    NSMutableDictionary *_events;
    NSMutableArray *_eventQueue;
    id<CMContinuityCaptureStateMachineActionDelegate> _actionDelegate;
}

@property (retain, nonatomic) CMContinuityCaptureState *currentState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *deferredEvents;

- (void)addEvents:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)aggregateEvents;
- (void)_enqueueEventWithNameToPost:(id)a0 data:(id)a1;
- (void)_notifyCompletion:(id)a0;
- (void)addStateTransitions:(id)a0;
- (void)enqueueEventWithNameToPost:(id)a0 data:(id)a1;
- (void)enqueueEventWithNameToPostOnCurrentQueue:(id)a0 data:(id)a1;
- (id)eventForName:(id)a0;
- (id)getDeferredEventsToPostForState:(id)a0;
- (id)getNewStateAfterPostingDeferredEvents:(id)a0 deferredEventsToPost:(id *)a1;
- (id)initWithActionDelegate:(id)a0 queue:(id)a1;
- (void)notifyCompletion:(id)a0;
- (BOOL)postEventWithName:(id)a0 data:(id)a1;
- (BOOL)postSameStateAction:(id)a0 transition:(id)a1 event:(id)a2;
- (BOOL)postStateChangeAction:(id)a0 transition:(id)a1 event:(id)a2;

@end
