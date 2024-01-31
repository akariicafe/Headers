@interface SearchUICalendarStore : NSObject

+ (id)colorForDefaultCalendarForNewEvents;
+ (id)eventControllerWithIdentifier:(id)a0;
+ (void)fetchCalendarItemFromEventIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)sharedCalendarStore;

@end
