@protocol CNFuture;

@interface _CNDiagnosticResponsePreparer : _CNAutocompleteResponsePreparerDecorator

@property (readonly) id<CNFuture> logFuture;

- (void).cxx_destruct;
- (id)prepareResults:(id)a0;
- (id)initWithResponsePreparer:(id)a0 delegate:(id)a1 log:(id /* block */)a2;

@end
