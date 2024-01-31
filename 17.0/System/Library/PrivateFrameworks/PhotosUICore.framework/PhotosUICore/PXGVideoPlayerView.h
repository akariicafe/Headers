@class PXVideoSession, PXVideoSessionUIView;
@protocol NSCopying;

@interface PXGVideoPlayerView : UIView <PXGReusableView>

@property (retain, nonatomic) PXVideoSession *videoSession;
@property (readonly, nonatomic) PXVideoSessionUIView *videoSessionView;
@property (copy, nonatomic) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (id)init;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void).cxx_destruct;

@end
