@class NSString, NSArray;

@interface BWDroppedSample : NSObject {
    NSString *_reason;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _pts;
    NSArray *_backPressureSemaphoresToIgnore;
}

@property (readonly) NSString *reason;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } pts;
@property (readonly) NSArray *backPressureSemaphoresToIgnore;

+ (id)newDroppedSampleWithReason:(id)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)newDroppedSampleFromDroppedSample:(id)a0 backPressureSemaphoresToIgnore:(id)a1;

- (void)dealloc;

@end
