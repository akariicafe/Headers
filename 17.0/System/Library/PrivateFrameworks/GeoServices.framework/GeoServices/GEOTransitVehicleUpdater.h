@class NSSet;
@protocol GEOTransitVehicleUpdaterDelegate;

@interface GEOTransitVehicleUpdater : NSObject

@property (weak, nonatomic) id<GEOTransitVehicleUpdaterDelegate> delegate;
@property (copy, nonatomic) NSSet *tripIDs;
@property (nonatomic, getter=isActive) BOOL active;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
