@interface CLHeadingInternal : NSObject <NSCopying> {
    struct { double x; double y; double z; double magneticHeading; double trueHeading; double accuracy; double timestamp; double temperature; double magnitude; double inclination; int calibration; } fHeading;
}

- (id)initWithClientHeading:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
