@class NSSet;

@interface _GCDevicePhysicalInputClickableDirectionPadElementParameters : _GCDevicePhysicalInputDirectionPadElementParameters {
    NSSet *_pressedSources;
    unsigned long long _eventPressedValueField;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
