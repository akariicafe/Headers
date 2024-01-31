@class CNContactStore, NSString;

@interface CNAutocompleteDirectoryServerSearch : NSObject <CNAutocompleteSearch>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)executeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchContactsForFetchRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
