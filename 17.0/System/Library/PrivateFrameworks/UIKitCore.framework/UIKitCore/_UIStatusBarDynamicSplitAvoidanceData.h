@class NSMutableDictionary;

@interface _UIStatusBarDynamicSplitAvoidanceData : NSObject

@property (nonatomic) double leadingDelta;
@property (nonatomic) double trailingDelta;
@property (retain, nonatomic) NSMutableDictionary *avoidanceFrameAbsoluteFrames;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLeadingDelta:(double)a0 trailingDelta:(double)a1;

@end
