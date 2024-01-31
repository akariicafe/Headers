@class NSArray;

@interface GEOMapFeatureRunningTrackLane : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) unsigned int flowlineOffset;
@property (readonly, nonatomic) NSArray *coordinates;

- (id)description;
- (void).cxx_destruct;
- (id)initWithVMP4Lane:(const void *)a0 coordinates:(id)a1;

@end
