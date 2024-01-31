@class CNContactStore, NSString;

@interface CNAutocompleteSuggestionsSearch : NSObject <CNAutocompleteSearch>

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)charactersThreshold;

- (id)init;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)convertContacts:(id)a0 request:(id)a1;
- (id)executeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)keysToFetchForRequest:(id)a0;
- (id /* block */)resultTransformWithFactory:(id)a0 properties:(id)a1;
- (id /* block */)resultTransformWithRequest:(id)a0;
- (id)suggestedContactsWithRequest:(id)a0 keysToFetch:(id)a1 error:(id *)a2;

@end
