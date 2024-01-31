@class UILabel, UIButton, UIImageView;

@interface PXGadgetCustomSectionHeaderUIView : PXGadgetSectionHeaderUIView

@property (retain, nonatomic) UILabel *appleInternalLabel;
@property (retain, nonatomic) UIButton *infoButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *iconTitleLabel;

+ (id)_appleInternalLabelText;
+ (double)_preferredHeightOfAppleInternalTextWithWidth:(double)a0;
+ (double)preferredHeightForText:(id)a0 buttonType:(unsigned long long)a1 fittingWidth:(double)a2 style:(unsigned long long)a3 dividerHidden:(BOOL)a4 isAccessibilitySize:(BOOL)a5;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_infoButtonSelected;
- (void)configureTitleLabel:(id)a0;

@end
