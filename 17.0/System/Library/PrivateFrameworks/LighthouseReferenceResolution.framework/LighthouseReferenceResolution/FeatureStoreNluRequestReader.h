@interface FeatureStoreNluRequestReader : NSObject

+ (id)getEvents;
+ (id)getEventsFromDate:(id)a0;
+ (id)getEventsWithInteractionIds:(id)a0;
+ (id)getEventsWithInteractionIdsFromDate:(id)a0 startDate:(id)a1 endDate:(id)a2;

@end
