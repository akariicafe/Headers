@class NSString, UIImageView, _UIActionSlider, UIButton;
@protocol TPSlidingButtonDelegateProtocol;

@interface TPSlidingButton : UIView <_UIActionSliderDelegate>

@property (retain) UIImageView *dialImageView;
@property (retain) _UIActionSlider *acceptButton;
@property (retain) UIButton *sideButtonRight;
@property int type;
@property id<TPSlidingButtonDelegateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)actionSlider:(id)a0 didUpdateSlideWithValue:(double)a1;
- (void)actionSliderDidCompleteSlide:(id)a0;
- (id)initWithSlidingButtonType:(int)a0;

@end
