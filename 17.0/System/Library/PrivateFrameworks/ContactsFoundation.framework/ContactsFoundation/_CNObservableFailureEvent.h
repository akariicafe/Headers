@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent {
    NSError *_error;
}

- (id)initWithError:(id)a0;
- (unsigned long long)hash;
- (BOOL)hasValue;
- (unsigned long long)eventType;
- (void)dematerializeWithObserver:(id)a0;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isEqual:(id)a0;
- (id)error;

@end
