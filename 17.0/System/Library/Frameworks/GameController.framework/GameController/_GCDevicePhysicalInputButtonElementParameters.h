@class NSSet;

@interface _GCDevicePhysicalInputButtonElementParameters : _GCDevicePhysicalInputElementParameters {
    BOOL _analog;
    float _pressedThreshold;
    NSSet *_sources;
    unsigned long long _eventPressedValueField;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
