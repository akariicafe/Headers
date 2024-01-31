@class NSString, NSArray;
@protocol GEOTransitArtworkDataSource;

@interface _GEOTransitNearbyScheduleCategory : NSObject <GEOTransitNearbyScheduleCategory>

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTransitScheduleCategory:(id)a0 nearbyScheduleGroups:(id)a1 categoryArtwork:(id)a2;

@end
