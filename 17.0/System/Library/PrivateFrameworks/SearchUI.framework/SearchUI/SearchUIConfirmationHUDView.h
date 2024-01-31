@class SearchUICheckView, UIVisualEffectView, UILabel;

@interface SearchUIConfirmationHUDView : UIView

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) SearchUICheckView *checkView;
@property (retain, nonatomic) UILabel *textLabel;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)animateCheckmark;

@end
