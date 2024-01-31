@class NSArray, ATXGenericFileBasedCache, NSObject, _PASLock;
@protocol OS_dispatch_queue;

@interface ATXPosterConfigurationCache : NSObject {
    ATXGenericFileBasedCache *_fileCache;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_outputQueue;
}

@property (readonly, copy, nonatomic) NSArray *configurations;

+ (id)sharedInstance;

- (id)initWithPath:(id)a0;
- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)_fetchConfigurationsReadingFromCacheIfNecessaryWithGuardedData:(id)a0;
- (void)_updateLastActiveDatesWithConfigurations:(id)a0;
- (void)updateConfigurations:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
