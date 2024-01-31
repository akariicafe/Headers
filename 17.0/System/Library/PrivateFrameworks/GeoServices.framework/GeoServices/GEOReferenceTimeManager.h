@class NSString, GEOReferenceTimeData, geo_isolater, NSObject;
@protocol OS_dispatch_semaphore;

@interface GEOReferenceTimeManager : NSObject <GEOConfigChangeListenerDelegate> {
    GEOReferenceTimeData *_refTimeData;
    geo_isolater *_iso;
    NSObject<OS_dispatch_semaphore> *_syncSem;
    BOOL _synchronized;
    BOOL _isGEOAPD;
    double _managerStartTime;
    unsigned int _attemptNum;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (id)_initInternal;
- (void)dealloc;
- (void)_persistBasisRefTimeData:(id)a0;
- (BOOL)_initFromPersistenceAtTime:(double)a0;
- (void)_kernBootTimeResult:(id /* block */)a0;
- (void)_syncWithTimed;
- (void)_reportCoreAnalyticAtTime:(double)a0 success:(BOOL)a1 error:(unsigned char)a2 attemptNo:(unsigned int)a3;
- (double)bestReferenceTime;
- (void).cxx_destruct;
- (BOOL)synchronized;
- (double)_referenceTime;
- (BOOL)_synchronized;
- (BOOL)_didKernBootTimeChange;
- (void)referenceTimeResult:(id /* block */)a0;
- (id)_retrievePersistedBasisRefTimeData;
- (void)_startTimedSync;

@end
