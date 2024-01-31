@class NSDate;

@interface CNAutocompleteRecentResult : CNAutocompleteResult

@property (readonly) NSDate *date;
@property BOOL matchesSendingAddress;
@property BOOL completesChosenGroup;

+ (id)comparators;
+ (id)contactResultWithDisplayName:(id)a0 value:(id)a1 lastSendingAddress:(id)a2 date:(id)a3;
+ (id)groupResultWithDisplayName:(id)a0 date:(id)a1;

- (void).cxx_destruct;

@end
