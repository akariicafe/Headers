@interface GEOComposedTransitBaseRouteSegment : GEOComposedRouteSegment {
    struct _NSRange { unsigned long long location; unsigned long long length; } _transitStepRange;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)endingTransitStop;
- (id)initWithComposedRoute:(id)a0 stepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 transitStepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 pointRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 segmentIndex:(unsigned long long)a4;
- (id)startingTransitStop;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })transitStepRange;

@end
