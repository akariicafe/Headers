@class VideosExtrasBorderedImageView;

@interface VideosExtrasZoomingImageTransitionContext : NSObject

@property (retain, nonatomic) VideosExtrasBorderedImageView *zoomingImageView;
@property (nonatomic) unsigned long long itemIndex;
@property (nonatomic) unsigned long long appearState;
@property (nonatomic, getter=isInteractive) BOOL interactive;

- (void).cxx_destruct;
- (id)initWithZoomingImageView:(id)a0 itemIndex:(unsigned long long)a1 appearState:(unsigned long long)a2 isInteractive:(BOOL)a3;

@end
