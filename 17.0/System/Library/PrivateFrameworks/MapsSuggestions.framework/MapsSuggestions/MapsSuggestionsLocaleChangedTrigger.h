@interface MapsSuggestionsLocaleChangedTrigger : MapsSuggestionsBaseTrigger

- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (id)init;

@end
