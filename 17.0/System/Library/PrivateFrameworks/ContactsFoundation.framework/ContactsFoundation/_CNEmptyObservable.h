@interface _CNEmptyObservable : CNObservable

- (id)pipelineDescription:(id /* block */)a0;
- (id)pipelineDescriptionWithOperation:(id /* block */)a0 onObservable:(id)a1;
- (id)subscribe:(id)a0;
- (id)debugPipelineDescription;

@end
