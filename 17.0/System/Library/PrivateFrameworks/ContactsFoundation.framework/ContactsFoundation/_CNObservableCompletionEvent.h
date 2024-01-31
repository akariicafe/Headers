@interface _CNObservableCompletionEvent : CNObservableEvent

- (BOOL)hasValue;
- (unsigned long long)eventType;
- (void)dematerializeWithObserver:(id)a0;
- (id)value;
- (BOOL)isEqual:(id)a0;
- (id)error;

@end
