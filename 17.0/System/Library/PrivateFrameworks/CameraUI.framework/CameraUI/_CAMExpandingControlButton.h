@class UIFont, CAMSlashContainer, UIImageView, NSString, UILabel, UIImage;

@interface _CAMExpandingControlButton : UIControl <CAMViewOrientable>

@property (readonly, nonatomic) CAMSlashContainer *_titleContentView;
@property (retain, nonatomic, setter=_setTitleLabel:) UILabel *_titleLabel;
@property (retain, nonatomic, setter=_setTitleImageView:) UIImageView *_titleImageView;
@property (nonatomic, setter=_setIntrinsicLabelSize:) struct CGSize { double width; double height; } _intrinsicLabelSize;
@property (retain, nonatomic) NSString *titleText;
@property (readonly, nonatomic) UIFont *titleFont;
@property (nonatomic) UIImage *titleImage;
@property (nonatomic) struct CGSize { double x0; double x1; } slashSize;
@property (nonatomic, getter=isSlashed) BOOL slashed;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateTitleLabel;
- (id)_attributedTextForTitle:(id)a0;
- (id)_effectiveSubtitleFont;
- (id)_effectiveTitleFont;
- (void)_updateTitleImageView;
- (void)setSlashed:(BOOL)a0 animated:(BOOL)a1;
- (void)setTitleText:(id)a0 font:(id)a1;

@end
