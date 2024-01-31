@class AVRoutingSessionInternal, AVRoutingSessionDestination;

@interface AVRoutingSession : NSObject {
    AVRoutingSessionInternal *_ivars;
}

@property (readonly) AVRoutingSessionDestination *destination;
@property (readonly) BOOL establishedAutomaticallyFromLikelyDestination;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithFigRoutingSession:(struct OpaqueFigRoutingSession { } *)a0;

@end
