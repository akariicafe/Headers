@class NSURL;

@interface RCMutableCompositionFragment : RCCompositionFragment

@property (retain, nonatomic) NSURL *AVOutputURL;
@property (nonatomic) double contentDuration;
@property (nonatomic) struct { double x0; double x1; } timeRangeInContentToUse;
@property (nonatomic) struct { double x0; double x1; } timeRangeInComposition;

- (BOOL)intersectWithTimeRange:(struct { double x0; double x1; })a0;

@end
