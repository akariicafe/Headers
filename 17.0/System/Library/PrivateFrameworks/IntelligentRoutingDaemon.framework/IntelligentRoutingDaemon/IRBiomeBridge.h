@class NSString, IRBiomeProvider, NSMutableDictionary;

@interface IRBiomeBridge : NSObject <IRBiomeProviderInterface> {
    IRBiomeProvider *_biomeProvider;
    NSMutableDictionary *_eventTypeToSinkMap;
    NSMutableDictionary *_eventTypeToSchedulerMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_logCompletion:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)subscribeEvent:(long long)a0;
- (id)fetchLatestEventsOfEventType:(long long)a0 numEvents:(unsigned long long)a1;
- (id)initWithBiomeProvider:(id)a0 targetQueue:(id)a1;
- (void)unsubscribeEvent:(long long)a0;

@end
