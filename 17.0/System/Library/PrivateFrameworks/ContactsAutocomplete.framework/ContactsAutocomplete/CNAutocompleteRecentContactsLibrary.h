@interface CNAutocompleteRecentContactsLibrary : NSObject

+ (void)addLoggingHandlersToFuture:(id)a0 request:(id)a1;
+ (id)addressKindsForSearchType:(unsigned long long)a0;
+ (id)domainsForFetchRequest:(id)a0;
+ (id)domainsForSearchType:(unsigned long long)a0;
+ (unsigned long long)implicitGroupThresholdForSearchType:(unsigned long long)a0;
+ (id)library:(id)a0 recentContactsWithRequest:(id)a1;
+ (id)queryForRequest:(id)a0;

@end
