@class NSSet;
@protocol GEOTransitRouteUpdaterDelegate;

@interface GEOTransitRouteUpdater : NSObject

@property (weak, nonatomic) id<GEOTransitRouteUpdaterDelegate> delegate;
@property (copy, nonatomic) NSSet *requests;
@property (nonatomic, getter=isActive) BOOL active;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 andInitialTTL:(double)a1;

@end
