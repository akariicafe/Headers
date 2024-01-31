@class NSString, NSSet, NFStateMachineState;

@interface NFStateMachineEvent : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *states;
@property (retain, nonatomic) NFStateMachineState *destinationState;
@property (copy, nonatomic) id /* block */ fireBlock;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 transitionFromStates:(id)a1 toState:(id)a2;
- (id)onFire:(id /* block */)a0;
- (id)fired:(id)a0 withOwner:(id)a1;

@end
