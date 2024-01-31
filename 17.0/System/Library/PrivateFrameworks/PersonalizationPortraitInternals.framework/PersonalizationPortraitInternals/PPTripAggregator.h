@interface PPTripAggregator : NSObject

+ (id)keyForCategory:(unsigned char)a0;
+ (id)_eventsFromCategory:(unsigned char)a0 inPool:(id)a1;
+ (id)_tripCandidatesFromCategory:(unsigned char)a0 andEvents:(id)a1;
+ (id)mergeTripCandidates:(id)a0;
+ (id)mergeTripCandidates:(id)a0 supportsGroundTransportEvents:(BOOL)a1;
+ (id)tripCandidatesWithEvents:(id)a0;
+ (id)tripCandidatesWithEvents:(id)a0 supportsGroundTransportEvents:(BOOL)a1;
+ (id)tripEventsFromCandidates:(id)a0;
+ (id)tripEventsWithEvents:(id)a0 from:(id)a1 to:(id)a2;

@end
