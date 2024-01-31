@class NSString, NSSet;

@interface _GCDevicePhysicalInputElement : _GCDevicePhysicalInputView <GCPhysicalInputElement> {
    unsigned long long _localizedNameSlot;
    unsigned long long _symbolSlot;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy) NSSet *aliases;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *sfSymbolsName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned short)updateContextSize;

- (id)symbol;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithParameters:(id)a0;
- (id)initWithTemplate:(id)a0 context:(id)a1;
- (BOOL)isEqualToElement:(id)a0;
- (void)postCommit:(const void *)a0 sender:(id)a1;
- (void)preCommit:(const void *)a0 sender:(id)a1;
- (BOOL)update:(void *)a0 forGamepadEvent:(id)a1 withTimestamp:(double)a2;
- (BOOL)update:(void *)a0 forMouseEvent:(struct { unsigned long long x0; unsigned long long x1; union { struct { float x0; float x1; } x0; long long x1; } x2; })a1 withTimestamp:(double)a2;
- (BOOL)update:(void *)a0 forUsages:(unsigned long long)a1 with:(id)a2;

@end
