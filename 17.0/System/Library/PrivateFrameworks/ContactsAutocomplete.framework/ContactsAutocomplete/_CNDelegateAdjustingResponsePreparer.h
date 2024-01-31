@interface _CNDelegateAdjustingResponsePreparer : _CNAutocompleteResponsePreparerDecorator

- (id)prepareResults:(id)a0;
- (void)adjustArray:(id)a0 byAddingResults:(id)a1;
- (void)adjustArray:(id)a0 byRemovingResults:(id)a1;

@end
