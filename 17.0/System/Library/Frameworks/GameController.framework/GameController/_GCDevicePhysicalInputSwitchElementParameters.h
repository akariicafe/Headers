@class NSSet;

@interface _GCDevicePhysicalInputSwitchElementParameters : _GCDevicePhysicalInputElementParameters {
    BOOL _sequential;
    BOOL _canWrap;
    NSSet *_sources;
    unsigned long long _eventPositionField;
    struct _NSRange { unsigned long long location; unsigned long long length; } _positionRange;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
