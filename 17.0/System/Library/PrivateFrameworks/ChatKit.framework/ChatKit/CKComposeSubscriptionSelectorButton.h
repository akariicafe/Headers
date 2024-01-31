@class UIStackView, UITapGestureRecognizer, UILabel, TPBadgeView;
@protocol CKComposeSubscriptionSelectorButtonDelegate;

@interface CKComposeSubscriptionSelectorButton : UIButton

@property (retain, nonatomic) TPBadgeView *badgeView;
@property (retain, nonatomic) UILabel *buttonTitleLabel;
@property (retain, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UITapGestureRecognizer *gestureRecognizer;
@property (weak, nonatomic) id<CKComposeSubscriptionSelectorButtonDelegate> delegate;
@property (nonatomic) unsigned long long theme;

- (id)init;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (void)loadConstraintsForButton;
- (void)updateContentsWithTitle:(id)a0 badgeText:(id)a1 theme:(unsigned long long)a2;
- (void)updateTheme;
- (void)updateTitleFont:(id)a0;

@end
