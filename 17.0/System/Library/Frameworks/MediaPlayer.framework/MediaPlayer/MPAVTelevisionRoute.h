@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
}

@property (readonly, nonatomic) void *television;

- (id)routeUID;
- (void)dealloc;
- (long long)routeType;
- (id)connection;
- (void).cxx_destruct;
- (long long)routeSubtype;
- (id)initWithTelevision:(void *)a0;

@end
