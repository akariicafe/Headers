@interface _CNObservableResultEvent : CNObservableEvent {
    id _result;
}

- (unsigned long long)hash;
- (BOOL)hasValue;
- (id)initWithResult:(id)a0;
- (unsigned long long)eventType;
- (void)dematerializeWithObserver:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isEqual:(id)a0;
- (id)error;

@end
