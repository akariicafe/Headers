@class NSSet, NSString;
@protocol GCPressedStateInput, GCLinearInput, GCTouchedStateInput;

@interface _GCDevicePhysicalInputButtonElement : _GCDevicePhysicalInputElement <GCLinearInput, GCPressedStateInput, GCButtonElement> {
    unsigned long long _sourcesSlot;
    unsigned long long _isAnalogSlot;
    unsigned long long _pressedThresholdSlot;
    unsigned long long _pressedValueFieldSlot;
    unsigned long long _valueChangedHandlerSlot;
    unsigned long long _pressedChangedHandlerSlot;
    unsigned long long _valueSlot;
    unsigned long long _valueTimestampSlot;
    unsigned long long _pressedTimestampSlot;
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
@property (copy) id /* block */ pressedDidChangeHandler;
@property (readonly, getter=isPressed) BOOL pressed;
@property (readonly) double lastPressedStateTimestamp;
@property (readonly) double lastPressedStateLatency;
@property (readonly) id<GCPressedStateInput, GCLinearInput> pressedInput;
@property (readonly) id<GCTouchedStateInput> touchedInput;
@property (readonly, copy) NSSet *aliases;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *sfSymbolsName;

+ (unsigned short)updateContextSize;

- (id)initWithParameters:(id)a0;
- (id)initWithTemplate:(id)a0 context:(id)a1;
- (BOOL)isEqualToElement:(id)a0;
- (void)postCommit:(const void *)a0 sender:(id)a1;
- (void)preCommit:(const void *)a0 sender:(id)a1;
- (BOOL)update:(void *)a0 forGamepadEvent:(id)a1 withTimestamp:(double)a2;
- (BOOL)update:(void *)a0 forUsages:(unsigned long long)a1 with:(id)a2;

@end
