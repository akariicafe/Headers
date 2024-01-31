@class PPLocation, NSMutableSet, PPLocalLocationStore;

@interface PPLocationCache : NSObject {
    PPLocalLocationStore *_locationStore;
    BOOL _valid;
    PPLocation *_home;
    PPLocation *_work;
    NSMutableSet *_homeOrWorkAddresses;
}

- (void)_refresh;
- (id)init;
- (id)initWithLocationStore:(id)a0;
- (void)invalidate;
- (id)homeOrWorkAddresses;
- (void).cxx_destruct;
- (id)locationForWork;
- (id)locationForHome;

@end
