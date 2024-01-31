@class NSArray, NSMutableDictionary, NSString;

@interface HDSPSleepEventList : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) NSMutableDictionary *eventsByProvider;
@property (readonly, nonatomic) NSArray *sortedEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)overdueEventsForDate:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)nextEvent;
- (void)removeAllEvents;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_sortEvents;
- (void)addEvents:(id)a0 provider:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)removeEvents:(id)a0;
- (void).cxx_destruct;
- (id)allEvents;
- (id)succinctDescription;
- (void)removeEventsForProvider:(id)a0;

@end
