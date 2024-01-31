@class NSString;

@interface CNAutocompleteLocalGroupsFetcher : NSObject <CNAutocompleteLocalQueryDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)autocompleteResultsForProperties:(id)a0 fetchResults:(id)a1 resultFactory:(id)a2 contactStore:(id)a3;
- (id)queryNameForLogging;
- (id)resultsForSearchString:(id)a0 terms:(id)a1 properties:(id)a2 contactStore:(id)a3 error:(id *)a4;

@end
