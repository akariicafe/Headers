@class RTDefaultsManager;

@interface RTStarkManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsNotificationName:(id)a0;
+ (id)connectionStateToString:(long long)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (id)init;
- (id)initWithDefaultsManager:(id)a0;
- (void).cxx_destruct;
- (void)_fetchConnectionStateWithHandler:(id /* block */)a0;
- (void)fetchConnectionStateWithHandler:(id /* block */)a0;

@end
