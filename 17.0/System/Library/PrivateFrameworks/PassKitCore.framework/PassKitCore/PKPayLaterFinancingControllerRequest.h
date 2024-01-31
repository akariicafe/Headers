@class NSDecimalNumber, NSString, NSMutableOrderedSet, NSError;

@interface PKPayLaterFinancingControllerRequest : NSObject

@property (readonly, nonatomic) NSDecimalNumber *amount;
@property (readonly, copy, nonatomic) NSString *optionIdentifierToCancel;
@property (readonly, nonatomic) unsigned long long authenticationState;
@property (readonly, copy, nonatomic) NSError *stateMachineError;
@property (readonly, nonatomic) long long stateMachineCancelReason;
@property (readonly, nonatomic) NSMutableOrderedSet *completions;

- (id)description;
- (void).cxx_destruct;
- (void)addCompletions:(id)a0;
- (BOOL)coalesceWithRequest:(id)a0;
- (id)initWithTransactionAmount:(id)a0 completion:(id /* block */)a1;
- (id)initWithTransactionAmount:(id)a0 optionIdentifierToCancel:(id)a1 authenticationState:(unsigned long long)a2 stateMachineError:(id)a3 stateMachineCancelReason:(long long)a4 completion:(id /* block */)a5;

@end
