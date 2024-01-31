@class UIActivityIndicatorView, UIVisualEffectView, PXMessagesStackActivityIndicatorViewUserData;
@protocol NSCopying;

@interface PXMessagesStackActivityIndicatorView : UIView <PXGReusableView> {
    PXMessagesStackActivityIndicatorViewUserData *_userData;
    UIVisualEffectView *_visualEffectView;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (copy, nonatomic) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)prepareForReuse;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
