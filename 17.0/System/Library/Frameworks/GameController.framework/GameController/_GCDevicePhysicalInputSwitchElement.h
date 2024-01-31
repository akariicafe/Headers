@class NSSet, NSString;
@protocol GCSwitchPositionInput;

@interface _GCDevicePhysicalInputSwitchElement : _GCDevicePhysicalInputElement <GCSwitchPositionInput, GCSwitchElement> {
    unsigned long long _sourcesSlot;
    unsigned long long _canWrapSlot;
    unsigned long long _isSequentialSlot;
    unsigned long long _positionMinSlot;
    unsigned long long _positionMaxSlot;
    unsigned long long _positionFieldSlot;
    unsigned long long _positionChangedHandlerSlot;
    unsigned long long _positionSlot;
    unsigned long long _timestampSlot;
}

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
@property (readonly) id<GCSwitchPositionInput> positionInput;
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
