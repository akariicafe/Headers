@interface EKEventActionHandler : NSObject

+ (id)sharedInstance;
+ (id)_logHandle;
+ (id)_displayStringForDate:(id)a0;

- (void)prepareForEventUpdate:(id)a0;
- (id)createEventIntentForEvent:(id)a0 withSuggestionsInfoUniqueKey:(id)a1;
- (void)handleEventDeletion:(id)a0;
- (void)donateInteractionForAction:(id)a0 onEvent:(id)a1;
- (void)handleEventCreation:(id)a0;
- (void)donatePredictiveAction:(id)a0 forEvent:(id)a1;
- (void)handleEventUpdate:(id)a0;
- (void)removeInteractionsForCalendar:(id)a0;
- (id)_intentForAction:(id)a0 onEvent:(id)a1;
- (id)createEventIntentForEvent:(id)a0;

@end
