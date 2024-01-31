@protocol MTLSharedEvent;

@interface MPSGraphSignalEvent : MPSGraphObject {
    id<MTLSharedEvent> _event;
    unsigned long long _executionStage;
    unsigned long long _value;
}

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 executionStage:(unsigned long long)a1 value:(unsigned long long)a2;

@end
