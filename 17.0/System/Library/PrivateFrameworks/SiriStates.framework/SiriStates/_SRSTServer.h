@class _SRSTState;

@interface _SRSTServer : NSObject {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ stateMachineObserver;
}

@property (nonatomic, readonly) _SRSTState *currentState;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
