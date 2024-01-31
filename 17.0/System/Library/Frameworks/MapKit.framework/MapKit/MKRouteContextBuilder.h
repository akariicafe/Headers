@class NSCache;

@interface MKRouteContextBuilder : NSObject {
    NSCache *_routeOverlapCache;
}

- (void).cxx_destruct;
- (id)buildRouteContextForRoutes:(id)a0 selectedRouteIndex:(unsigned long long)a1;

@end
