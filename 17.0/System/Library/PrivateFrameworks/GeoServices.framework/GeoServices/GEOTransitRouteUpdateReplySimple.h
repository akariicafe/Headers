@class NSString, GEOTransitRouteUpdateResponse;

@interface GEOTransitRouteUpdateReplySimple : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEOTransitRouteUpdateResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
