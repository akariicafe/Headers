@class UIStackView, MTMaterialView, NSArray, NSString, UIView, UILabel, HACCStackView;
@protocol HACCContentModuleDelegate;

@interface HUICCCapsuleButton : UIControl <MTVisualStylingRequiring, HACCContentModule>

@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (retain, nonatomic) UIStackView *mainStack;
@property (retain, nonatomic) HACCStackView *expandedStack;
@property (retain, nonatomic) UIStackView *horizontalPillStack;
@property (retain, nonatomic) UIView *iconViewContainer;
@property (retain, nonatomic) UIStackView *verticalTitleStack;
@property (retain, nonatomic) UIView *accessoryViewContainer;
@property (retain, nonatomic) NSArray *defaultLayouts;
@property (retain, nonatomic) NSArray *largeTextLayouts;
@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) BOOL isExpanded;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (nonatomic) BOOL providesOwnSeparator;

- (id)accessibilityLabel;
- (void)setSubtitleText:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)setTitleText:(id)a0;
- (BOOL)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityCustomActions;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryFooterViews;
- (void)setDimmingState:(BOOL)a0;
- (void)updateValue;
- (void)buttonTapped;
- (void)_setIsExpanded:(BOOL)a0;
- (long long)_indexToInsertFor:(id)a0;
- (void)_updateStackConstraints;
- (void)addExpandedView:(id)a0;
- (id)contentValue;
- (void)removeExpandedView:(id)a0;
- (BOOL)shouldAddSeparatorForView:(id)a0;
- (BOOL)shouldAutoExpandForView:(id)a0;
- (BOOL)shouldIncludeIconViewInFooterViews;
- (BOOL)supportsExpanding;

@end
