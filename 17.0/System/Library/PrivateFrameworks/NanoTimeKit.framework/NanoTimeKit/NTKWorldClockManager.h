@class NSArray, WorldClockManager;

@interface NTKWorldClockManager : NSObject {
    WorldClockManager *_frameworkManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _frameworkLock;
}

@property (readonly, nonatomic) NSArray *cities;

+ (id)sharedManager;

- (id)init;
- (unsigned long long)addCity:(id)a0;
- (void)loadCities;
- (BOOL)checkIfCitiesModified;
- (void).cxx_destruct;
- (void)saveCities;
- (BOOL)canAddCity;

@end
