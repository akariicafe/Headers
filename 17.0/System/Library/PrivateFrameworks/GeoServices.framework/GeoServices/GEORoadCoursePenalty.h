@class GEOLocation;

@interface GEORoadCoursePenalty : NSObject <GEORoadMatcherPenalty> {
    GEOLocation *_location;
    BOOL _useRawLocations;
}

@property (nonatomic) BOOL useRawLocations;

- (id)initWithLocation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)penaltyForCandidate:(id)a0;

@end
