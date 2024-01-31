@class UIImageView, UIView;

@interface CNAutocompleteDisambiguatingTableViewCell : CNComposeTableViewCell

@property (retain) UIImageView *checkmarkImageView;
@property (nonatomic, getter=isCheckmarkVisible) BOOL checkmarkVisible;
@property (readonly) UIView *checkmarkView;

+ (id)identifier;
+ (id)createCheckmarkView;

- (id)titleTextStyle;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setRecipient:(id)a0;
- (BOOL)canCollapseRecipient;
- (double)leadingInsetsFromCurrentMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
