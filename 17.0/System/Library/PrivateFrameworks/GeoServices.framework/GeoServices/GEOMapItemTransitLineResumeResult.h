@class NSDate;
@protocol GEOTransitDepartureSequence;

@interface GEOMapItemTransitLineResumeResult : NSObject

@property (nonatomic) BOOL blocked;
@property (retain, nonatomic) id<GEOTransitDepartureSequence> departureSequence;
@property (retain, nonatomic) NSDate *earliestNextDepartureDate;

- (void).cxx_destruct;

@end
