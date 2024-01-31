@class NSArray, NSDictionary;

@interface MPAVRoutingViewControllerUpdate : NSObject

@property (copy, nonatomic) NSArray *pickedRoutes;
@property (copy, nonatomic) NSArray *pendingPickedRoutes;
@property (copy, nonatomic) NSArray *displayableAvailableRoutes;
@property (copy, nonatomic) NSArray *displayAsPickedRoutes;
@property (copy, nonatomic) NSArray *volumeCapableRoutes;
@property (copy, nonatomic) NSDictionary *routeGrouping;
@property (nonatomic) BOOL canGroup;
@property (nonatomic) BOOL hasPendingPickedRoutes;
@property (nonatomic) BOOL shouldReload;

- (void).cxx_destruct;

@end
