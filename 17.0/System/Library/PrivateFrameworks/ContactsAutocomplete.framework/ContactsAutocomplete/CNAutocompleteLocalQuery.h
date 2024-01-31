@class CNContactStore, CNAutocompleteFetchRequest, NSString;
@protocol CNAutocompleteLocalQueryDelegate;

@interface CNAutocompleteLocalQuery : NSObject <CNCancelable> {
    id<CNAutocompleteLocalQueryDelegate> _delegate;
}

@property (retain) CNAutocompleteFetchRequest *request;
@property (retain) CNContactStore *contactStore;
@property (retain) CNContactStore *contactFetcherStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupsQuery;
+ (id)peopleQuery;
+ (id)queryWithDelegate:(id)a0;

- (id)run;
- (id)fetchResults;
- (void).cxx_destruct;
- (void)cancel;
- (id)autocompleteResultsForFetchResults:(id)a0 resultFactory:(id)a1;
- (id)makeResultFactory;
- (id)searchableProperties;

@end
