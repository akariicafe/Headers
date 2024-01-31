@interface NUDefaultSourceDerivation : NSObject <NUSourceDerivation>

- (long long)orientationFromOriginal:(long long)a0 derivativeOrientation:(long long)a1;
- (struct { long long x0; long long x1; })scaleFromOriginalSize:(struct { long long x0; long long x1; })a0 derivativeSize:(struct { long long x0; long long x1; })a1;

@end
