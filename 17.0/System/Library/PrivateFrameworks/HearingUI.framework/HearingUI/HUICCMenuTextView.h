@class HACCStackView, UITapGestureRecognizer, HACCCapsuleTitleView, CCUIContentModuleDetailTransitioningDelegate, NSLayoutConstraint, NSString, _HUIDarkTextView;
@protocol HACCContentModuleDelegate;

@interface HUICCMenuTextView : UIView <UIGestureRecognizerDelegate, HACCContentModule>

@property (retain, nonatomic) HACCStackView *stackView;
@property (retain, nonatomic) HACCCapsuleTitleView *titleView;
@property (retain, nonatomic) _HUIDarkTextView *textView;
@property (nonatomic) BOOL isSubModule;
@property (nonatomic) BOOL isLargeText;
@property (retain, nonatomic) NSLayoutConstraint *titleViewHeightLayout;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) CCUIContentModuleDetailTransitioningDelegate *detailTransitioningDelegate;
@property (copy, nonatomic) id /* block */ presentVCBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (nonatomic) BOOL providesOwnSeparator;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)_handleTapGestureRecognizer:(id)a0;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)_setupTitleView;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)updateValue;
- (void)_showMenuViewController;
- (BOOL)_updateIsSubModule;
- (void)_updateMenuItemsForViewController:(id)a0;
- (void)_updatePresentedMenuViewControllerIfNecessary;
- (id)contentValue;
- (id)initWithModule:(unsigned long long)a0 andDelegate:(id)a1;

@end
