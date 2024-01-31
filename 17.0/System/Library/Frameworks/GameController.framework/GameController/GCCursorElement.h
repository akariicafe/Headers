@class NSString, NSSet;
@protocol GCCursorPositionInput;

@interface GCCursorElement : _GCDevicePhysicalInputElement <GCCursorPositionInput, GCPhysicalInputElement> {
    unsigned long long _positionChangedHandlerSlot;
    unsigned long long _xDeltaSlot;
    unsigned long long _yDeltaSlot;
}

@property (readonly) id<GCCursorPositionInput> position;
@property (readonly, nonatomic) struct { double x0; double x1; } delta;
@property (copy) id /* block */ positionDidChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *aliases;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *sfSymbolsName;

+ (unsigned short)updateContextSize;

- (BOOL)_setPositionDidChangeHandler:(id /* block */)a0;
- (id)initWithTemplate:(id)a0 context:(id)a1;
- (void)postCommit:(const void *)a0 sender:(id)a1;
- (void)preCommit:(const void *)a0 sender:(id)a1;
- (BOOL)update:(void *)a0 forMouseEvent:(struct { unsigned long long x0; unsigned long long x1; union { struct { float x0; float x1; } x0; long long x1; } x2; })a1 withTimestamp:(double)a2;
- (BOOL)update:(void *)a0 forUsages:(unsigned long long)a1 with:(id)a2;

@end
