@class _GCDevicePhysicalInputBase;

@interface _GCDevicePhysicalInputElementsArray : NSArray {
    _GCDevicePhysicalInputBase *_implementation;
}

- (id)retain;
- (BOOL)allowsWeakReference;
- (unsigned long long)retainCount;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (oneway void)release;

@end
