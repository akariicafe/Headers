@class NSSet, NSString;

@interface _GCDevicePhysicalInputAxisInput : _GCDevicePhysicalInputView <GCAxisInput> {
    unsigned long long _sourcesSlot;
    unsigned long long _isAnalogSlot;
    unsigned long long _canWrapSlot;
    unsigned long long _valueChangedHandlerSlot;
    unsigned long long _valueSlot;
    unsigned long long _valueTimestampSlot;
}

@property (copy) id /* block */ valueDidChangeHandler;
@property (readonly) float value;
@property (readonly, getter=isAnalog) BOOL analog;
@property (readonly) BOOL canWrap;
@property (readonly) double lastValueTimestamp;
@property (readonly) double lastValueLatency;
@property (readonly, copy) NSSet *sources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned short)updateContextSize;

- (id)init;
- (id)initWithParameters:(id)a0;
- (id)initWithTemplate:(id)a0 context:(id)a1;
- (void)postCommit:(const void *)a0 sender:(id)a1;
- (void)preCommit:(const void *)a0 sender:(id)a1;
- (BOOL)update:(void *)a0 forUsages:(unsigned long long)a1 with:(id)a2;

@end
