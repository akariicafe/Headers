@class NSString, _GCDevicePhysicalInputBase;
@protocol _GCDevicePhysicalInputViewDataSource;

@interface _GCDevicePhysicalInputView : NSObject <_GCDevicePhysicalInputViewDataSource, _GCDevicePhysicalInputViewInitializationContext> {
    id<_GCDevicePhysicalInputViewDataSource> _dataSource;
    BOOL _isPartOfPhysicalInput;
    BOOL _isSnapshot;
    _Atomic BOOL _isObserved;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) _GCDevicePhysicalInputBase *implementation;

+ (id)withParameters:(id)a0;
+ (unsigned short)updateContextSize;
+ (id)withTemplate:(id)a0 context:(id)a1;

- (id)retain;
- (BOOL)allowsWeakReference;
- (id)init;
- (BOOL)retainWeakReference;
- (void)dealloc;
- (unsigned long long)retainCount;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (oneway void)release;
- (id)initWithParameters:(id)a0;
- (void)view:(id)a0 setPrimitiveValue:(unsigned long long)a1 forSlot:(unsigned long long *)a2;
- (id)viewDataSource:(id)a0;
- (id)initWithTemplate:(id)a0 context:(id)a1;
- (void)postCommit:(const void *)a0 sender:(id)a1;
- (void)preCommit:(const void *)a0 sender:(id)a1;
- (BOOL)update:(void *)a0 forUsages:(unsigned long long)a1 with:(id)a2;
- (unsigned long long)view:(id)a0 allocateObjectSlot:(unsigned char)a1 withCopyOfValueFromView:(id)a2 slot:(unsigned long long)a3;
- (unsigned long long)view:(id)a0 allocatePrimitiveSlot:(unsigned char)a1 withCopyOfValueFromView:(id)a2 slot:(unsigned long long)a3;
- (unsigned long long)view:(id)a0 makeReferenceToView:(id)a1;
- (id)view:(id)a0 objectValueForSlot:(unsigned long long *)a1;
- (unsigned long long)view:(id)a0 primitiveValueForSlot:(unsigned long long *)a1;
- (void)view:(id)a0 setObjectValue:(id)a1 forSlot:(unsigned long long *)a2 policy:(unsigned long long)a3;
- (BOOL)view:(id)a0 testAndSetObjectValue:(id)a1 forSlot:(unsigned long long *)a2 policy:(unsigned long long)a3;
- (BOOL)view:(id)a0 testAndSetPrimitiveValue:(unsigned long long)a1 forSlot:(unsigned long long *)a2;
- (id)view:(id)a0 viewForSlot:(unsigned long long *)a1;

@end
