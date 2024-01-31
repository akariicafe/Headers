@class NSArray;

@interface AVScheduledParameterRamp : NSObject <NSCopying> {
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
}

@property (class, readonly) id defaultValue;
@property (class, readonly, getter=_defaultAdditionalFigRepresentationObjects) NSArray *defaultAdditionalFigRepresentationObjects;

@property (readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly) id startValue;
@property (readonly) id endValue;
@property (readonly, getter=_additionalFigRepresentationObjects) NSArray *additionalFigRepresentationObjects;

+ (id)scheduledParameterRampWithPropertyList:(id)a0;

- (unsigned long long)hash;
- (id)propertyList;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPropertyList:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)scheduledParameterRampInterpolatedToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
