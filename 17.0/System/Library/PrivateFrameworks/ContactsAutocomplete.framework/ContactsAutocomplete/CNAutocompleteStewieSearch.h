@class NSString;

@interface CNAutocompleteStewieSearch : NSObject <CNAutocompleteSearch>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)executeRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
