@interface PTCinematographyFocusFramesOptions : NSObject <NSCopying>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumRackFocusPullTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumRackFocusPullTime;
@property (nonatomic) float maximumDisparityPerSecond;

+ (float)_defaultMaximumDisparityPerSecond;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })_defaultMaximumRackFocusPullTime;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })_defaultMinimumRackFocusPullTime;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGlobalMetadata:(id)a0;
- (BOOL)writeToGlobalMetadata:(id)a0;

@end
