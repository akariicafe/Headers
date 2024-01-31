@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject

@property (retain, nonatomic) SPAdvertisementCache *advertisementCache;

- (id)finderStateManager;
- (id)stateManager;
- (void).cxx_destruct;
- (id)beaconPayloadCache;

@end
