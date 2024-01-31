@class NSString;

@interface WGWidgetLifeCycleSequence : NSObject

@property (nonatomic, setter=_setCurrentState:) long long currentState;
@property (retain, nonatomic, getter=_previousSequence, setter=_setPreviousSequence:) WGWidgetLifeCycleSequence *previousSequence;
@property (readonly, copy, nonatomic) NSString *sequenceIdentifier;

- (id)transitionToState:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)sequenceWithIdentifier:(id)a0;
- (BOOL)isCurrentState:(long long)a0;
- (BOOL)_isValidTransitionToState:(long long)a0;
- (id /* block */)beginTransitionToState:(long long)a0 error:(id *)a1;
- (id)initWithSequenceIdentifier:(id)a0;
- (BOOL)isCurrentStateAtLeast:(long long)a0;
- (BOOL)isCurrentStateAtMost:(long long)a0;
- (BOOL)isCurrentStateNotYet:(long long)a0;

@end
