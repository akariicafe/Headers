@class NSString, NSArray, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;

@interface TVPStateMachine : NSObject {
    id /* block */ _stateChangeHandler;
    NSMutableArray *_events;
    NSMutableDictionary *_handlers;
    NSMutableDictionary *_defaultHandlers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_blocksToExecuteAfterStateTransition;
    BOOL _handlingEvent;
}

@property (copy) NSString *currentState;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long mode;
@property BOOL shouldAcceptEvents;
@property (copy, nonatomic) NSString *loggingComponent;
@property (retain, nonatomic) NSObject<OS_os_log> *logObject;
@property (copy) NSArray *ignorableEvents;
@property (nonatomic) BOOL callsStateChangeHandlerSynchronously;
@property (readonly, nonatomic) unsigned long long eventCount;

+ (void)initialize;
+ (void)deregisterStateMachine:(id)a0;
+ (void)registerStateMachine:(id)a0;
+ (id)stateMachineWithName:(id)a0;
+ (id)stateMachinesOfType:(Class)a0;

- (void)postEvent:(id)a0;
- (void).cxx_destruct;
- (void)_processEvent:(id)a0;
- (void)_processNextEvent;
- (void)_dispatchEvent:(id)a0;
- (id)initWithName:(id)a0 initialState:(id)a1 mode:(long long)a2;
- (void)postEvent:(id)a0 withContext:(id)a1 userInfo:(id)a2;
- (void)purgeEventQueue;
- (id /* block */)_eventHandlerForEvent:(id)a0;
- (void)_executePostTransitionBlocks;
- (void)_transitionToState:(id)a0 withEvent:(id)a1 context:(id)a2 userInfo:(id)a3;
- (void)deregisterHandlers;
- (void)executeBlockAfterCurrentStateTransition:(id /* block */)a0;
- (id)initWithName:(id)a0 initialState:(id)a1 mode:(long long)a2 stateChangeHandler:(id /* block */)a3;
- (void)logUnhandledEvents;
- (void)postEvent:(id)a0 withContext:(id)a1;
- (void)registerDefaultHandlerForEvent:(id)a0 withBlock:(id /* block */)a1;
- (void)registerHandlerForEvent:(id)a0 onState:(id)a1 withBlock:(id /* block */)a2;
- (void)registerHandlerForEvent:(id)a0 onStates:(id)a1 withBlock:(id /* block */)a2;
- (void)registerHandlerForEvents:(id)a0 onStates:(id)a1 withBlock:(id /* block */)a2;
- (void)registerStateTransitionFromState:(id)a0 onEvent:(id)a1 toState:(id)a2;

@end
