@class NFMutexLock, NSMutableDictionary, NFStateMachineState;

@interface NFStateMachine : NSObject

@property (weak, nonatomic) id owner;
@property (retain, nonatomic) NSMutableDictionary *states;
@property (retain, nonatomic) NSMutableDictionary *events;
@property (retain, nonatomic) NFStateMachineState *state;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NFMutexLock *lock;
@property (nonatomic) long long statusToken;

- (void)addState:(id)a0;
- (void)activate;
- (id)description;
- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (id)debugDescription;
- (void)deactivate;
- (void)activateIfNeeded;
- (id)fireEventWithName:(id)a0 withContext:(id)a1;
- (id)initWithState:(id)a0 withOwner:(id)a1;
- (void)deactivateIfNeeded;

@end
