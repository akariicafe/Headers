@class HDFakeDataCollectorConfiguration, NSString, HDProfile, HDDataCollectorMultiplexer, HDDataCollectorState, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDFakeDataCollector : NSObject <HDDataCollector> {
    HDProfile *_profile;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDDataCollectorMultiplexer *_multiplexer;
    HDDataCollectorState *_state;
    NSObject<OS_dispatch_queue> *_generationQueue;
    NSObject<OS_dispatch_source> *_generationSource;
    NSMutableDictionary *_generatorsByType;
    long long _datumCount;
}

@property (copy, nonatomic) HDFakeDataCollectorConfiguration *configuration;
@property (readonly, nonatomic) long long datumCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collectedTypes;

- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (id)identifierForDataAggregator:(id)a0;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (void).cxx_destruct;
- (id)sourceForDataAggregator:(id)a0;
- (void)generateForConfiguration:(id)a0 from:(id)a1 to:(id)a2;
- (void)registerWithAggregators;
- (void)unregisterFromAggregators;

@end
