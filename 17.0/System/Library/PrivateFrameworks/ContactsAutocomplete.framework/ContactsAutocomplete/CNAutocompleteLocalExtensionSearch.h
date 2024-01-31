@class CLSDataStore, NSString;

@interface CNAutocompleteLocalExtensionSearch : NSObject <CNAutocompleteSearch>

@property (readonly, nonatomic) CLSDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDataStore:(id)a0;
- (void).cxx_destruct;
- (id)executeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchContactsForFetchRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
