@interface PXGainMapAnimationDurationFilter : PXNumberFilter

@property (nonatomic) double filterStartTime;
@property (nonatomic) BOOL enabled;
@property (nonatomic) double activationThreshold;
@property (nonatomic) BOOL gainMapImageAvailable;

- (id)init;
- (double)updatedOutput;

@end
