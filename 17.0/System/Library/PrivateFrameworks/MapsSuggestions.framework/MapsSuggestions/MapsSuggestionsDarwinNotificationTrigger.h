@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    const char *_notificationName;
    int _notificationToken;
}

- (void)didRemoveLastObserver;
- (const char *)notificationName;
- (void)didAddFirstObserver;
- (id)initWithNotificationName:(const char *)a0;
- (void)dealloc;
- (id)initWithNotificationName:(const char *)a0 triggerName:(id)a1;
- (id)initWithName:(id)a0;

@end
