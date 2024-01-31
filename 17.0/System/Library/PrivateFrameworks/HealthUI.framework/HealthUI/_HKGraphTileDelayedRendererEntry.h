@class _HKGraphTileRenderToImage;

@interface _HKGraphTileDelayedRendererEntry : NSObject

@property (readonly, nonatomic) _HKGraphTileRenderToImage *imageRenderer;
@property (readonly, nonatomic) double lastAssignmentTime;

- (void).cxx_destruct;
- (BOOL)expiredAtTime:(double)a0;
- (id)initWithImageRenderer:(id)a0 lastAssignmentTime:(double)a1;

@end
