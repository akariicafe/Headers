@class NSSet, NSString;
@protocol GCPressedStateInput, GCLinearInput, GCTouchedStateInput;

@interface _GCDevicePhysicalInputClickableDirectionPadElement : _GCDevicePhysicalInputDirectionPadElement <GCButtonElement> {
    unsigned long long _pressedValueFieldSlot;
    unsigned long long _pressedInputSlot;
}

@property (readonly) id<GCPressedStateInput, GCLinearInput> pressedInput;
@property (readonly) id<GCTouchedStateInput> touchedInput;
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
