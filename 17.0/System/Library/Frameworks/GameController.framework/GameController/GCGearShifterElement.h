@class NSSet, NSString;
@protocol GCRelativeInput, GCSwitchPositionInput;

@interface GCGearShifterElement : _GCDevicePhysicalInputElement <GCSwitchPositionInput, GCRelativeInput, GCPhysicalInputElement> {
    BOOL _isPatternShifter;
    union { struct { unsigned long long sourcesSlot; unsigned long long positionMinSlot; unsigned long long positionMaxSlot; unsigned long long positionFieldSlot; unsigned long long positionChangedHandlerSlot; unsigned long long positionSlot; unsigned long long timestampSlot; } pattern; struct { unsigned long long sourcesSlot; unsigned long long deltaChangedHandlerSlot; unsigned long long deltaSlot; unsigned long long timestampSlot; } sequential; } _impl;
}

@property (readonly) id<GCSwitchPositionInput> patternInput;
@property (readonly) id<GCRelativeInput> sequentialInput;
@property (copy) id /* block */ positionDidChangeHandler;
@property (readonly) long long position;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } positionRange;
@property (readonly, getter=isSequential) BOOL sequential;
@property (readonly) BOOL canWrap;
@property (readonly) double lastPositionTimestamp;
@property (readonly) double lastPositionLatency;
@property (readonly, copy) NSSet *sources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ deltaDidChangeHandler;
@property (readonly) float delta;
@property (readonly, getter=isAnalog) BOOL analog;
@property (readonly) double lastDeltaTimestamp;
@property (readonly) double lastDeltaLatency;
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
