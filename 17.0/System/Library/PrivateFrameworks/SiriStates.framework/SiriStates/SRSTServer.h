@class SRSTState, _SRSTServer;

@interface SRSTServer : NSObject

@property (readonly) _SRSTServer *underlyingObject;
@property (readonly, nonatomic) SRSTState *currentState;

- (id)init;
- (void).cxx_destruct;

@end
