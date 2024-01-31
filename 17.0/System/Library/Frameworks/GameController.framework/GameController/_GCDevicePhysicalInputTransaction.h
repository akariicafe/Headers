@class _GCDevicePhysicalInput, _GCDevicePhysicalInputChangedElementsEnumerator;

@interface _GCDevicePhysicalInputTransaction : _GCDevicePhysicalInputBase {
    _GCDevicePhysicalInput *_physicalInput;
    double _lastEventTimestamp;
    _GCDevicePhysicalInputChangedElementsEnumerator *_changedElements;
    BOOL _updateContextsValid;
}

- (BOOL)allowsWeakReference;
- (void)dealloc;
- (id)description;
- (BOOL)isSnapshot;
- (id)physicalInput;
- (double)lastEventTimestamp;

@end
