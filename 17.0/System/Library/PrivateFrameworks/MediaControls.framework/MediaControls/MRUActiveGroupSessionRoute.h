@class MRGroupSessionInfo;

@interface MRUActiveGroupSessionRoute : MPAVRoute

@property (retain, nonatomic) MRGroupSessionInfo *groupSessionInfo;

- (BOOL)isPickable;
- (id)routeUID;
- (long long)routeType;
- (BOOL)isPhoneRoute;
- (void).cxx_destruct;
- (BOOL)isPicked;
- (id)routeName;
- (long long)routeSubtype;
- (id)initWithActiveSession:(id)a0;

@end
