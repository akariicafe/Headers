@class CNAutocompleteCalendarServerOperationFactory, NSString, EKEventStore, CNStringTokenizer;

@interface CNAutocompleteCalendarServerSearch : NSObject <CNAutocompleteSearch>

@property (class, readonly) BOOL isSupported;

@property (retain, nonatomic) CNStringTokenizer *tokenizer;
@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) CNAutocompleteCalendarServerOperationFactory *operationFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)executeRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)executeRequest:(id)a0 source:(id)a1 resultsFactory:(id)a2 withCompletionHandler:(id /* block */)a3;
- (id)initWithEventStore:(id)a0 operationFactory:(id)a1;
- (id)queryForFetchRequest:(id)a0;
- (id /* block */)resultTransformWithFactory:(id)a0;

@end
