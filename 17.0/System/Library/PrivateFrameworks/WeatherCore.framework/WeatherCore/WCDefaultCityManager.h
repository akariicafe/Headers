@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface WCDefaultCityManager : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dataSynchronizationLock;
@property (retain, nonatomic) NSArray *defaultCities;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue;

- (id)init;
- (id)defaultCityForLocalTimeZone;
- (id)reloadDefaultCities;
- (void).cxx_destruct;

@end
