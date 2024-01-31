@class UIView, NSString, NSArray, UIPinchGestureRecognizer, UIInputWindowControllerHosting, UILayoutGuide, NSLayoutConstraint, UIKBInputBackdropView, UIInputViewSet;

@interface UIInputLayoutHostingItem : UIInputWindowControllerHostingItem <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILayoutGuide *belowInputLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *inputViewLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *assistantLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *accessoryLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *rightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *keyplaneWidthConstraint;
@property (retain, nonatomic) NSArray *onscreenConstraints;
@property (retain, nonatomic) NSArray *offscreenConstraints;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *inputLayoutView;
@property (retain, nonatomic) UIView *inputLayoutAssistantView;
@property (retain, nonatomic) UIView *inputLayoutAccessoryView;
@property (retain, nonatomic) UIInputViewSet *inputViewSet;
@property (retain, nonatomic) NSArray *guideConstraints;
@property (retain, nonatomic) NSArray *inputSetConstraints;
@property (weak, nonatomic) UIInputWindowControllerHosting *hosting;
@property (nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL isFloating;
@property (retain, nonatomic) UIKBInputBackdropView *standardBackgroundView;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIView *pillView;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (void)clearVisibilityConstraints;
- (void)clearInputAssistantViewEdgeConstraints;
- (void)disableViewSizingConstraints:(unsigned long long)a0 forNewView:(id)a1;
- (void)setInputAssistantView:(id)a0;
- (void)setInputAccessoryView:(id)a0;
- (id)inputAssistantView;
- (void)updateViewConstraints;
- (void)updateViewSizingConstraints;
- (void)someViewDidLayoutSubviews;
- (void)clearInputViewEdgeConstraints;
- (id)initWithInputViewSet:(id)a0 container:(id)a1;
- (id)initWithContainer:(id)a0;
- (void)updateInputAccessoryBackdropView;
- (void)updateInputAssistantBackdropView;
- (void)updateViewSizingConstraints:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrame;
- (void)updateVisibilityConstraintsForPlacement:(id)a0;
- (void)createBackdropView;
- (void)setPlacement;
- (void)updateEmptyHeightConstraint;
- (void)updateConstraintInsets;
- (void)trackPinch:(id)a0;
- (void)clearInputAccessoryViewEdgeConstraints;
- (void)refreshApplicator;
- (void)resetPlacement;
- (id)inputAccessoryView;
- (void)hideBackdrop:(BOOL)a0;
- (id)constraintsForView:(id)a0 embeddedInGuide:(id)a1;
- (void)constrainViewsToGuidesIfNeeded;
- (void)updateInputBackdropViewVisibility;
- (void)constrainGuidesIfNeeded;
- (void)changeOnScreen:(BOOL)a0 animated:(BOOL)a1;
- (void)reloadForPlacement;
- (id)constraintsForView:(id)a0 embeddedInView:(id)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void).cxx_destruct;
- (void)unloadForPlacement;
- (void)updateInputViewSet:(id)a0;
- (void)_updateBackdropViews;
- (void)setInputView:(id)a0;
- (void)updateInputBackdropView;
- (id)inputView;
- (void)createPlatterBackdropView;

@end
