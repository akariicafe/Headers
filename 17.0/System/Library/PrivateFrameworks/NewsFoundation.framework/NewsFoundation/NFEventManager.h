@class NSMutableSet, NSMutableDictionary;

@interface NFEventManager : NSObject

@property (readonly, nonatomic) NSMutableSet *events;
@property (readonly, nonatomic) NSMutableDictionary *triggers;

- (id)init;
- (void).cxx_destruct;
- (void)attemptTriggersForCurrentEvent:(id)a0;
- (void)fireEvent:(id)a0;
- (void)handleAlwaysTrigger:(id)a0 event:(id)a1;
- (void)handleOnceTrigger:(id)a0 event:(id)a1;
- (void)triggerAlwaysWhenAllEventsHaveOccurred:(id)a0 block:(id /* block */)a1;
- (void)triggerOnAnyEvent:(id)a0 block:(id /* block */)a1;
- (void)triggerOnEvent:(id)a0 block:(id /* block */)a1;
- (void)triggerOnceWhenAllEventsHaveOccurred:(id)a0 block:(id /* block */)a1;
- (void)triggerOnceWhenAnyEventHasOccurred:(id)a0 block:(id /* block */)a1;

@end
