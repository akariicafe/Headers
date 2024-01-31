@class NSArray, NSString, UILabel, PUStackView, UIView;

@interface PUPickerBannerView : UIView <CAAnimationDelegate>

@property (nonatomic, setter=_setAlignment:) long long _alignment;
@property (retain, nonatomic, setter=_setLabel:) UILabel *_label;
@property (retain, nonatomic, setter=_setStackView:) PUStackView *_stackView;
@property (nonatomic, setter=_setAnimatingStackView:) BOOL _animatingStackView;
@property (copy, nonatomic, setter=_setAnimationCompletionHandler:) id /* block */ _animationCompletionHandler;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UIView *rightView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateLabel;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setLeftView:(id)a0 animated:(BOOL)a1;
- (void)setRightView:(id)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameReversedIfRightToLeft:(BOOL)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_updateAlignment;
- (void)_updateStackView;
- (void)animateImagesOntoView:(id)a0 inContainerView:(id)a1 completionHandler:(id /* block */)a2;

@end
