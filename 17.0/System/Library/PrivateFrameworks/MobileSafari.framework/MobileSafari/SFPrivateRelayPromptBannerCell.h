@class UITextView, NSString, UILabel, SFBannerBackgroundView, UIButton;

@interface SFPrivateRelayPromptBannerCell : UICollectionViewCell <UITextViewDelegate> {
    SFBannerBackgroundView *_backgroundView;
    UILabel *_titleLabel;
    UITextView *_messageLabel;
    UIButton *_dismissButton;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) UIButton *turnOnButton;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUsingBanner:(id)a0;
- (id)focusEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)layoutSubviews;
- (void)_dismiss:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_attributedStringForMessage:(id)a0;
- (void)_turnOnPrivateRelay:(id)a0;
- (void)_updateTurnOnButtonConfiguration;

@end
