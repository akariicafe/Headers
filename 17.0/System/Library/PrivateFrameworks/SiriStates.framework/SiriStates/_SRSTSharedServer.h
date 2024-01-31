@class _SRSTSharedState;

@interface _SRSTSharedServer : NSObject {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ stateMachineObserver;
}

@property (nonatomic, readonly) _SRSTSharedState *currentState;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
