@interface FigTimeRangeAndObject : FigTimeRangeObj <FigTimeRangeOperationCopying, NSSecureCoding> {
    id _object;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)rangeAndObjectWithRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 andObject:(id)a1;

- (void)dealloc;
- (id)copyWithRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (id)object;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFigTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 andObject:(id)a1;
- (id)startTimeObject;
- (id)durationObject;
- (id)initWithCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 andObject:(id)a1;
- (id)representedToolObject;

@end
