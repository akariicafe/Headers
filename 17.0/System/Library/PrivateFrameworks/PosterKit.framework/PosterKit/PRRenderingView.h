@class PRPosterWindow, UIView;
@protocol PRRenderingViewOwner;

@interface PRRenderingView : UIView {
    id<PRRenderingViewOwner> _owner;
    PRPosterWindow *_window;
    UIView *_invertedBackgroundCutoutView;
}

@property (nonatomic) long long level;
@property (nonatomic) double parallaxFactor;
@property (nonatomic, getter=isAlphaInverted) BOOL alphaInverted;

- (void)invalidate;
- (id)initWithOwner:(id)a0 scene:(id)a1 level:(long long)a2 userInteractionEnabled:(BOOL)a3;
- (void).cxx_destruct;
- (BOOL)isEmpty;

@end
