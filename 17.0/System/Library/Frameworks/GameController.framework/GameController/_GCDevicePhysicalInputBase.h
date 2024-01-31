@class _GCDevicePhysicalInputStateTable, NSString, NSSet, _GCDevicePhysicalInputElementsArray, NSDictionary, _GCDevicePhysicalInputFacade, _GCDevicePhysicalInput, _GCDevicePhysicalInputElementsCollection;
@protocol GCDevice, _GCDevicePhysicalInputDataSource;

@interface _GCDevicePhysicalInputBase : NSObject <_GCDevicePhysicalInputViewDataSource> {
    id<GCDevice> _device;
    id<_GCDevicePhysicalInputDataSource> _dataSource;
    unsigned long long _elementCount;
    id *_indexedElements;
    NSDictionary *_elementIndexByAlias;
    struct __CFArray { } *_additionalViews;
    _GCDevicePhysicalInputElementsArray *_indexedElementViews;
    _GCDevicePhysicalInputElementsCollection *_elementCollection;
    _GCDevicePhysicalInputStateTable *_viewConfiguration;
    _GCDevicePhysicalInputStateTable *_viewProperties;
    _GCDevicePhysicalInputStateTable *_viewState;
    NSSet *_attributes;
    _GCDevicePhysicalInputFacade *_facade;
}

@property (readonly, getter=isSnapshot) BOOL snapshot;
@property (readonly) double lastEventTimestamp;
@property (readonly) double lastEventLatency;
@property (weak) id<GCDevice> device;
@property (weak) id<_GCDevicePhysicalInputDataSource> dataSource;
@property (readonly) _GCDevicePhysicalInput *physicalInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)description;
+ (id)debugDescription;

- (id)init;
- (void)dealloc;
- (id)redactedDescription;
- (void)view:(id)a0 setPrimitiveValue:(unsigned long long)a1 forSlot:(unsigned long long *)a2;
- (id)_initWithFacadeTemplate:(id)a0 elementsTemplates:(id)a1 attributes:(id)a2 context:(id)a3;
- (id)_stateTableForSlot:(union SlotID { unsigned long long x0; struct { unsigned int x0; unsigned char x1 : 8; unsigned char x2 : 8; unsigned short x3; } x1; })a0;
- (void)updateViewStateIfNeeded;
- (id)view:(id)a0 objectValueForSlot:(unsigned long long *)a1;
- (unsigned long long)view:(id)a0 primitiveValueForSlot:(unsigned long long *)a1;
- (void)view:(id)a0 setObjectValue:(id)a1 forSlot:(unsigned long long *)a2 policy:(unsigned long long)a3;
- (BOOL)view:(id)a0 testAndSetObjectValue:(id)a1 forSlot:(unsigned long long *)a2 policy:(unsigned long long)a3;
- (BOOL)view:(id)a0 testAndSetPrimitiveValue:(unsigned long long)a1 forSlot:(unsigned long long *)a2;
- (id)view:(id)a0 viewForSlot:(unsigned long long *)a1;

@end
