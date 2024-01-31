@class NSSet;

@interface _GCDevicePhysicalInputButtonInputParameters : _GCDevicePhysicalInputViewParameters {
    BOOL _analog;
    float _pressedThreshold;
    NSSet *_sources;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
