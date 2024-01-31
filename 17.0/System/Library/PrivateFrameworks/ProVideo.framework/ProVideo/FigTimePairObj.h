@interface FigTimePairObj : NSObject <NSCopying, NSSecureCoding> {
    struct PC_CMTimePair { struct { long long value; int timescale; unsigned int flags; long long epoch; } first; struct { long long value; int timescale; unsigned int flags; long long epoch; } second; } _pair;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)pairWithPair:(struct PC_CMTimePair { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

- (void)setFirst:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (unsigned long long)hash;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })first;
- (void)setPair:(struct PC_CMTimePair { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })second;
- (void)encodeWithCoder:(id)a0;
- (void)setSecond:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)getValue:(struct PC_CMTimePair { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct PC_CMTimePair { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })pair;
- (id)initWithFigTimePair:(struct PC_CMTimePair { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithFirst:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 Second:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
