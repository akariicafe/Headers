@class NSArray;

@interface PARFlightResponse : PARResponse

@property (retain, nonatomic) NSArray *flightResults;

+ (id)_debugResponseFromReply:(id)a0;
+ (id)responseFromReply:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
