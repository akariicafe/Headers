@class _GCDevicePhysicalInputTransaction;

@interface _GCDevicePhysicalInputChangedElementsEnumerator : NSEnumerator {
    _GCDevicePhysicalInputTransaction *_implementation;
    unsigned long long _currentIndex;
}

- (id)retain;
- (id)nextObject;
- (oneway void)release;

@end
