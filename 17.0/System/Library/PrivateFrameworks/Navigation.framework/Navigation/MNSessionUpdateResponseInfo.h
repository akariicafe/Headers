@class NSArray, GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, NSError;

@interface MNSessionUpdateResponseInfo : NSObject

@property (retain, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEOETATrafficUpdateRequest *request;
@property (retain, nonatomic) GEOETATrafficUpdateResponse *response;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double responseTime;

- (void).cxx_destruct;

@end
