@class NSString, SKStateTransitionTable;

@interface SKStateMachine : NSObject

@property (retain, nonatomic) SKStateTransitionTable *table;
@property (retain, nonatomic) NSString *event;
@property (retain, nonatomic) NSString *state;

+ (id)machineWithStateTransitionTable:(id)a0 startState:(id)a1 startEvent:(id)a2;

- (BOOL)finished;
- (void).cxx_destruct;
- (BOOL)nextWithError:(id *)a0;
- (BOOL)runWithError:(id *)a0;

@end
