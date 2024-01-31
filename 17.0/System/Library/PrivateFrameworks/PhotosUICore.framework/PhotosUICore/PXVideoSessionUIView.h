@class UIImageView, NSString, PXVideoView, UIImage, UIView, PXVideoSession, AVPlayerLayer;
@protocol PXVideoSessionUIViewDelegate;

@interface PXVideoSessionUIView : UIView <PXVideoViewDelegate, PXChangeObserver> {
    UIView *_videoContainerView;
    PXVideoView *_adoptedVideoView;
    UIImageView *_placeholderImageView;
}

@property (nonatomic) BOOL placeholderVisible;
@property (retain, nonatomic) PXVideoSession *videoSession;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) BOOL isVideoLayerReadyForDisplay;
@property (weak, nonatomic) id<PXVideoSessionUIViewDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (copy, nonatomic) NSString *videoGravity;
@property (nonatomic) BOOL toneMapToStandardDynamicRange;
@property (readonly, nonatomic) UIView *viewForSnapshotting;
@property (readonly, nonatomic) AVPlayerLayer *activePlayerLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentMode:(long long)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)generateSnapshotImage;
- (void)_updatePlaceholderVisibility;
- (void)_updateEdgeAntialiasing;
- (void)_updateVideoViewFrame;
- (void)videoViewReadinessDidChange:(id)a0;

@end
