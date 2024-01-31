@class NSSet;

@interface _GCDevicePhysicalInputAxisInputParameters : _GCDevicePhysicalInputViewParameters {
    BOOL _analog;
    BOOL _canWrap;
    NSSet *_sources;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
