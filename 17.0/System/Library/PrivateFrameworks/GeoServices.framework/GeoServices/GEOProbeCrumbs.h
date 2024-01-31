@class GEOComposedRoute;

@interface GEOProbeCrumbs : NSObject {
    unsigned long long _crumbCounter;
    unsigned long long _maxCrumbs;
    GEOComposedRoute *_route;
    int _baseE7Lat;
    int _baseE7Lng;
    unsigned long long _baseTimestamp;
    int _baseDistance;
    struct deque<_GEOProbeCrumbsLocation, std::allocator<_GEOProbeCrumbsLocation>> { struct __split_buffer<_GEOProbeCrumbsLocation *, std::allocator<_GEOProbeCrumbsLocation *>> { struct _GEOProbeCrumbsLocation **__first_; struct _GEOProbeCrumbsLocation **__begin_; struct _GEOProbeCrumbsLocation **__end_; struct __compressed_pair<_GEOProbeCrumbsLocation **, std::allocator<_GEOProbeCrumbsLocation *>> { struct _GEOProbeCrumbsLocation **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<_GEOProbeCrumbsLocation>> { unsigned long long __value_; } __size_; } _locations;
}

@property (readonly, nonatomic) BOOL enabled;

- (id)initWithRoute:(id)a0;
- (id)init;
- (void)clearCache;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_encodedDataForIntegersCount:(unsigned int)a0 valueCallback:(id /* block */)a1;
- (void)addLocation:(struct { double x0; double x1; })a0 polyCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 timestamp:(unsigned long long)a2;
- (id)recentLocationHistory;
- (void)resetStateWithRoute:(id)a0;

@end
