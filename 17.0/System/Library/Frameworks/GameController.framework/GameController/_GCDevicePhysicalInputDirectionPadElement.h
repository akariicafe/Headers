@class NSSet, NSString;
@protocol GCLinearInput, GCAxisInput, GCPressedStateInput;

@interface _GCDevicePhysicalInputDirectionPadElement : _GCDevicePhysicalInputElement <GCDirectionPadElement> {
    unsigned long long _upValueFieldSlot;
    unsigned long long _downValueFieldSlot;
    unsigned long long _leftValueFieldSlot;
    unsigned long long _rightValueFieldSlot;
    unsigned long long _xAxisSlot;
    unsigned long long _yAxisSlot;
    unsigned long long _upInputSlot;
    unsigned long long _downInputSlot;
    unsigned long long _leftInputSlot;
    unsigned long long _rightInputSlot;
}

@property (readonly) id<GCAxisInput> xAxis;
@property (readonly) id<GCAxisInput> yAxis;
@property (readonly) id<GCLinearInput, GCPressedStateInput> up;
@property (readonly) id<GCLinearInput, GCPressedStateInput> down;
@property (readonly) id<GCLinearInput, GCPressedStateInput> left;
@property (readonly) id<GCLinearInput, GCPressedStateInput> right;
@property (readonly, copy) NSSet *aliases;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *sfSymbolsName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned short)updateContextSize;

- (id)initWithParameters:(id)a0;
- (id)initWithTemplate:(id)a0 context:(id)a1;
- (BOOL)isEqualToElement:(id)a0;
- (void)postCommit:(const void *)a0 sender:(id)a1;
- (void)preCommit:(const void *)a0 sender:(id)a1;
- (BOOL)update:(void *)a0 forGamepadEvent:(id)a1 withTimestamp:(double)a2;
- (BOOL)update:(void *)a0 forUsages:(unsigned long long)a1 with:(id)a2;

@end
