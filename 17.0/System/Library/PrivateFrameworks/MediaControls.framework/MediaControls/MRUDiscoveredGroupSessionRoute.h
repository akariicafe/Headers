@class MRDiscoveredGroupSession;

@interface MRUDiscoveredGroupSessionRoute : MPAVRoute

@property (retain, nonatomic) MRDiscoveredGroupSession *discoveredGroupSession;

- (BOOL)isPickable;
- (id)routeUID;
- (long long)routeType;
- (BOOL)isPhoneRoute;
- (void).cxx_destruct;
- (BOOL)isPicked;
- (id)routeName;
- (long long)routeSubtype;
- (id)initWithDiscoveredGroupSession:(id)a0;

@end
