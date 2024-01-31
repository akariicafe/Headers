@class SRSTState, _SRSTClient, NSString;
@protocol SRSTClientDelegate;

@interface SRSTClient : NSObject <_SRSTClientDelegate>

@property (readonly) _SRSTClient *underlyingObject;
@property (weak, nonatomic) id<SRSTClientDelegate> delegate;
@property (readonly, nonatomic) SRSTState *currentState;
@property (readonly, copy, nonatomic) NSString *mostRecentEventName;

- (id)init;
- (void).cxx_destruct;
- (void)dispatchEvent:(long long)a0;
- (void)stateMachineWithClient:(id)a0 didReceiveEvent:(long long)a1;
- (void)stateMachineWithClient:(id)a0 didTransitionToState:(id)a1;
- (void)stopClient;

@end
