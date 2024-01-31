@class GEOMapRegion, NSArray;

@interface GEOMapFeatureRunningTrack : NSObject

@property (readonly, nonatomic) unsigned long long trackId;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long features;
@property (readonly, nonatomic) unsigned char reliabilityScore;
@property (readonly, nonatomic) GEOMapRegion *boundingBox;
@property (readonly, nonatomic) GEOMapRegion *orientedBoundingRegion;
@property (readonly, nonatomic) NSArray *lanes;

- (id)description;
- (void).cxx_destruct;
- (id)initWithVMP4Track:(const void *)a0 boundingBox:(id)a1;

@end
