@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsCollection : GCPhysicalInputElementCollection {
    _GCDevicePhysicalInputBase *_implementation;
}

- (id)retain;
- (BOOL)allowsWeakReference;
- (unsigned long long)retainCount;
- (unsigned long long)count;
- (id)elementAtIndex:(unsigned long long)a0;
- (oneway void)release;
- (id)elementForAlias:(id)a0;

@end
