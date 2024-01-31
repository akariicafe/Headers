@class UIStackView, UIView, NSArray, NSString, NSMutableDictionary, UIImageView, UISelectionFeedbackGenerator, UILabel, CCUIMenuModuleItem;

@interface HUICCMenuItemCheckmarkView : UIControl <MTVisualStylingRequiring>

@property (retain, nonatomic) UIView *highlightedBackgroundView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIStackView *verticalTitleStack;
@property (retain, nonatomic) UIImageView *checkmarkView;
@property (retain, nonatomic) NSMutableDictionary *categoriesToVisualStylingProviders;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) CCUIMenuModuleItem *menuItem;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;

@end
