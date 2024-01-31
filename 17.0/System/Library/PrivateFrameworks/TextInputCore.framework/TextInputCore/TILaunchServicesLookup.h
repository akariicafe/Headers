@class NSArray, NSString, NSDate;

@interface TILaunchServicesLookup : NSObject <TIKeyboardActivityObserving>

@property (retain, nonatomic) NSArray *cache;
@property (retain, nonatomic) NSDate *lastCacheUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)lookupAppNames;
+ (void)enumerateInstalledApplicationNames:(id /* block */)a0;
+ (void)disableForTesting:(BOOL)a0;
+ (id)genreIDsForApplicationIdentifier:(id)a0;

- (id)init;
- (void)dealloc;
- (void)resetCache;
- (void)enumerateAppNames:(id /* block */)a0;
- (void)handleMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (id)tryCache;
- (void)keyboardActivityDidTransition:(id)a0;
- (void).cxx_destruct;
- (void)cacheNames:(id)a0;
- (id)appNames;

@end
