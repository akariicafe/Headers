@class FigCaptureMachPortSendRight;

@interface BWFencedAnimationInfo : NSObject

@property (readonly) FigCaptureMachPortSendRight *fencePortSendRight;
@property (readonly) long long fencePortGenerationCount;

- (void)dealloc;
- (id)description;
- (id)initWithFencePortSendRight:(id)a0;

@end
