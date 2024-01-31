@interface BWPreviewStitcherFencedAnimationInfo : BWFencedAnimationInfo

@property double primaryCaptureAspectRatio;
@property double primaryCaptureRectCenterX;
@property int primaryCaptureRectCenterXPixelOffset;

+ (id)fencedAnimationInfoWithAspectRatio:(double)a0 centerX:(double)a1 centerXPixelOffset:(int)a2 fencePortSendRight:(id)a3;

- (id)description;

@end
