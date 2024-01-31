@class NSMutableDictionary, UIView;
@protocol UIStepperVisualElement;

@interface UIStepper : UIControl <UIStepperControl> {
    NSMutableDictionary *_dividerImages;
    NSMutableDictionary *_incrementImages;
    NSMutableDictionary *_decrementImages;
    NSMutableDictionary *_backgroundImages;
}

@property (retain, nonatomic) UIView<UIStepperVisualElement> *visualElement;
@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (nonatomic) BOOL autorepeat;
@property (nonatomic) BOOL wraps;
@property (nonatomic) double value;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;
@property (nonatomic) double stepValue;

+ (BOOL)_allowsUnsupportedMacIdiomBehavior;
+ (id)visualElementForTraitCollection:(id)a0;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)a0;
+ (Class)_fallbackVisualElementClass;
+ (void)_registerVisualElementClass:(Class)a0 forIdiom:(long long)a1;
+ (Class)visualElementClassForTraitCollection:(id)a0;

- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)_populateArchivedSubviews:(id)a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)tintColorDidChange;
- (void)encodeWithCoder:(id)a0;
- (void)setTintColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)backgroundImageForState:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_commonStepperInit;
- (void)_emitValueChanged;
- (void)_refreshVisualElement;
- (void)_refreshVisualElementForTraitCollection:(id)a0 populatingAPIProperties:(BOOL)a1;
- (id)decrementImageForState:(unsigned long long)a0;
- (id)dividerImageForLeftSegmentState:(unsigned long long)a0 rightSegmentState:(unsigned long long)a1;
- (id)incrementImageForState:(unsigned long long)a0;
- (void)setDecrementImage:(id)a0 forState:(unsigned long long)a1;
- (void)setDividerImage:(id)a0 forLeftSegmentState:(unsigned long long)a1 rightSegmentState:(unsigned long long)a2;
- (void)setIncrementImage:(id)a0 forState:(unsigned long long)a1;
- (void)visualElementDidSetValue:(id)a0;
- (void)visualElementSendValueChangedEvent:(id)a0;

@end
