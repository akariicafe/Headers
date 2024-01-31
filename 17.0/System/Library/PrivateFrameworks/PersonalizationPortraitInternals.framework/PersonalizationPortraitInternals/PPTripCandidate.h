@class NSArray;

@interface PPTripCandidate : NSObject

@property (retain, nonatomic) NSArray *flights;
@property (retain, nonatomic) NSArray *hotels;
@property (retain, nonatomic) NSArray *others;
@property (retain, nonatomic) NSArray *groundTransports;

- (void).cxx_destruct;
- (BOOL)canBeMergedWithTripCandidate:(id)a0;
- (BOOL)canBeMergedWithTripCandidate:(id)a0 supportsGroundTransportEvents:(BOOL)a1;
- (id)initWithTripCandidateA:(id)a0 andTripCandidateB:(id)a1;
- (BOOL)shouldPromoteToTripEvent;
- (id)tripEventFromCandidate;

@end
