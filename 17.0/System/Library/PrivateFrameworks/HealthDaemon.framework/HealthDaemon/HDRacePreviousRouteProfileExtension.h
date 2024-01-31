@class HDRaceRouteClusterManager, NSString, HDProfile;

@interface HDRacePreviousRouteProfileExtension : NSObject <HDProfileExtension> {
    HDProfile *_profile;
}

@property (readonly, nonatomic) HDRaceRouteClusterManager *raceRouteClusterManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;

@end
