@class NSString, GEODirectionsResponse, GEODirectionsError;

@interface GEOXPCDirectionsReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEODirectionsResponse *directionsResponse;
@property (retain, nonatomic) GEODirectionsError *directionsError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
