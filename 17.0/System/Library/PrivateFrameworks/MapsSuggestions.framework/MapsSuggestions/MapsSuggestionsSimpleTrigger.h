@interface MapsSuggestionsSimpleTrigger : MapsSuggestionsBaseTrigger

- (void)didRemoveLastObserver;
- (id)initWithName:(id)a0 queue:(id)a1;
- (void)didAddFirstObserver;
- (void)fire;
- (id)initWithName:(id)a0;

@end
