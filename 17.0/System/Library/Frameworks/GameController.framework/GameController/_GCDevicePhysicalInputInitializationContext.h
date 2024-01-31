@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputInitializationContext : NSObject <_GCDevicePhysicalInputViewInitializationContext> {
    struct __CFArray { } *_views;
    id _viewConfiguration;
    id _viewProperties;
    id _viewState;
}

@property (readonly) _GCDevicePhysicalInputBase *implementation;

- (id)init;
- (void)dealloc;
- (id)viewDataSource:(id)a0;
- (unsigned long long)view:(id)a0 allocateObjectSlot:(unsigned char)a1 withCopyOfValueFromView:(id)a2 slot:(unsigned long long)a3;
- (unsigned long long)view:(id)a0 allocatePrimitiveSlot:(unsigned char)a1 withCopyOfValueFromView:(id)a2 slot:(unsigned long long)a3;
- (unsigned long long)view:(id)a0 makeReferenceToView:(id)a1;

@end
