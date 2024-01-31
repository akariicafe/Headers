@class GEORouteAttributes;

@interface _MNETAUpdateRequestParameters : NSObject

@property (nonatomic) BOOL shouldUseConditionalRequest;
@property (nonatomic) BOOL shouldRepeatAfterCompletion;
@property (nonatomic) BOOL shouldRetryImmediatelyOnError;
@property (nonatomic) BOOL shouldTrackPendingRequest;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;

- (void).cxx_destruct;

@end
