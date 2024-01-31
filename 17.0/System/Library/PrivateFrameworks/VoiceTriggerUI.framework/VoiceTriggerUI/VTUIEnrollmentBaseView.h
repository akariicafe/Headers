@class UIView, NSString, UITextView, UIImageView, _UIBackdropView, NSLayoutConstraint, UILabel, UIScrollView;
@protocol VTUIEnrollmentDelegate;

@interface VTUIEnrollmentBaseView : UIView <UITextViewDelegate> {
    UIImageView *_orbImage;
    UIView *_scrollContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_instructionLabel;
    UIView *_contentView;
    UITextView *_privacyTextView;
    UIScrollView *_scrollView;
    _UIBackdropView *_backdropView;
    NSLayoutConstraint *_readableLeftAnchorConstraint;
    NSLayoutConstraint *_readableRightAnchorConstraint;
}

@property (weak, nonatomic) id<VTUIEnrollmentDelegate> enrollmentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)backdropView;
- (void)traitCollectionDidChange:(id)a0;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)setShowsVerticalScrollIndicator:(BOOL)a0;
- (void)setContentView:(id)a0;
- (void)safeAreaInsetsDidChange;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (long long)_backdropStyle;
- (void)_setupUI;
- (id)_createPrivacyTextView;
- (void)fadeInSubviews;
- (double)imageOffsetFromTop;
- (void)setInstructionText:(id)a0;
- (BOOL)showPrivacyTextView;

@end
