@class NSSet;

@interface _GCGearShifterElementParameters : _GCDevicePhysicalInputElementParameters {
    BOOL _patternShifter;
    NSSet *_sources;
    unsigned long long _eventShifterValueField;
    struct _NSRange { unsigned long long location; unsigned long long length; } _positionRange;
}

+ (Class)viewClass;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
