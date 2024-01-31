@class UIColor, UISwitchVisualElement, NSString, UIImage, UIImpactFeedbackGenerator;

@interface UISwitch : UIControl <UISwitchControl, UISwitchVisualElementProvider, NSCoding>

@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UISwitchVisualElement *visualElement;
@property (nonatomic, getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:) BOOL alwaysShowOnOffLabel;
@property (retain, nonatomic, getter=_impactFeedbackGenerator, setter=_setImpactFeedbackGenerator:) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (nonatomic) long long switchStyle;
@property (retain, nonatomic) UIColor *onTintColor;
@property (retain, nonatomic) UIColor *thumbTintColor;
@property (retain, nonatomic) UIImage *onImage;
@property (retain, nonatomic) UIImage *offImage;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;
@property (nonatomic) long long preferredStyle;
@property (nonatomic, getter=isOn) BOOL on;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)visualElementForTraitCollection:(id)a0 style:(long long)a1;
+ (void)setVisualElementProvider:(id)a0;
+ (BOOL)_allowsUnsupportedMacIdiomBehavior;
+ (id)visualElementForTraitCollection:(id)a0;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)a0;

- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (id)init;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)dealloc;
- (void)_populateArchivedSubviews:(id)a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)tintColorDidChange;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_setStyle:(long long)a0;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isAccessibilityElementByDefault;
- (void)visualElement:(id)a0 transitionedToOn:(BOOL)a1;
- (BOOL)_isFixedSize;
- (void)_refreshVisualElement;
- (void)_refreshVisualElementForTraitCollection:(id)a0 populatingAPIProperties:(BOOL)a1;
- (BOOL)_shouldShowOnOffLabels;
- (void)_showingOnOffLabelChanged;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (unsigned long long)defaultAccessibilityTraits;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })a0;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1 notifyingVisualElement:(BOOL)a2;
- (void)visualElementHadTouchUpInside:(id)a0;

@end
