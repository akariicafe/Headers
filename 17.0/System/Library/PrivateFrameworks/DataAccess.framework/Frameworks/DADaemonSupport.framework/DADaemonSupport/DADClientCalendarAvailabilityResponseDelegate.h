@class NSString, NSArray, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface DADClientCalendarAvailabilityResponseDelegate : DADClientDelegate <DAEventsCalendarAvailabilityResponseConsumer> {
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_ignoredEventID;
    NSArray *_addresses;
    id _requestID;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)calendarAvailabilityRequestFinishedWithError:(id)a0;
- (void)performRequest;
- (void)calendarAvailabilityRequestReturnedResults:(id)a0;
- (id)initWithAccountID:(id)a0 client:(id)a1 startDate:(id)a2 endDate:(id)a3 ignoredEventID:(id)a4 addresses:(id)a5;

@end
