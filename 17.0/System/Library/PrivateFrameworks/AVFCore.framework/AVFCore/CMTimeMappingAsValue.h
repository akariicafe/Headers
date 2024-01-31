@interface CMTimeMappingAsValue : NSValue {
    struct { struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } source; struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } target; } _timeMapping;
}

+ (BOOL)supportsSecureCoding;
+ (id)valueWithCMTimeMapping:(struct { struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x1; })a0;

- (unsigned long long)hash;
- (const char *)objCType;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (void)getValue:(void *)a0;
- (id)description;
- (BOOL)isEqualToValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x0; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } x1; })CMTimeMappingValue;

@end
