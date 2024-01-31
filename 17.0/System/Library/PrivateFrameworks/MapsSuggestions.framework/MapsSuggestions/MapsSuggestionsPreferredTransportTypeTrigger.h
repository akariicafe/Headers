@interface MapsSuggestionsPreferredTransportTypeTrigger : MapsSuggestionsBaseTrigger {
    id _transportTypeChangedListener;
}

- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (id)init;
- (void).cxx_destruct;

@end
