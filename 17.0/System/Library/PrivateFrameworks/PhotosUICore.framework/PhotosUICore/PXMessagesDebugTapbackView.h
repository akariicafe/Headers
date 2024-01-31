@class UIImageView, PXMessagesDebugTapbackUserData;
@protocol NSCopying;

@interface PXMessagesDebugTapbackView : UIView <PXGReusableView> {
    UIImageView *_heartImageView;
    PXMessagesDebugTapbackUserData *_userData;
}

@property (nonatomic) double desiredAlpha;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long reuseCounter;
@property (copy, nonatomic) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)prepareForReuse;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAlpha:(double)a0;
- (void)_bounce;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)shouldReloadForUserData:(id)a0;
- (void)_updateFinalAlpha;

@end
