@class NSString, GEODirectionsRequest, NSArray, NSError, GEODirectionsResponse;

@interface MNTraceDirectionsRow : NSObject <MNTracePlayerTimelineStreamObjectType>

@property (readonly, nonatomic) double position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double requestTimestamp;
@property (nonatomic) double responseTimestamp;
@property (retain, nonatomic) GEODirectionsRequest *request;
@property (retain, nonatomic) GEODirectionsResponse *response;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSArray *waypoints;
@property (nonatomic) unsigned long long selectedRouteIndex;

- (void).cxx_destruct;

@end
