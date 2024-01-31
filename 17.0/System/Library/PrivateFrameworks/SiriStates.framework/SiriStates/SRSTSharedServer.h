@class SRSTSharedState, _SRSTSharedServer;

@interface SRSTSharedServer : NSObject

@property (readonly) _SRSTSharedServer *underlyingObject;
@property (readonly, nonatomic) SRSTSharedState *currentState;

- (id)init;
- (void).cxx_destruct;

@end
