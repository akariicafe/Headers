@class NSSet, NSString;
@protocol GCAxisInput, GCRelativeInput;

@interface GCSteeringWheelElement : _GCDevicePhysicalInputElement <GCAxisInput, GCRelativeInput, GCAxisElement> {
    unsigned long long _sourcesSlot;
    unsigned long long _maximumDegreesOfRotationSlot;
    unsigned long long _rotationValueFieldSlot;
    unsigned long long _valueChangedHandlerSlot;
    unsigned long long _deltaChangedHandlerSlot;
    unsigned long long _valueSlot;
    unsigned long long _deltaSlot;
    unsigned long long _timestampSlot;
}

@property (readonly) float maximumDegreesOfRotation;
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
@property (copy) id /* block */ deltaDidChangeHandler;
@property (readonly) float delta;
@property (readonly) double lastDeltaTimestamp;
@property (readonly) double lastDeltaLatency;
@property (readonly) id<GCAxisInput> absoluteInput;
@property (readonly) id<GCRelativeInput> relativeInput;
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
