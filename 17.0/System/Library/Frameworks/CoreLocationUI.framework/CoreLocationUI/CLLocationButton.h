@class UIColor, NSString, _UISlotView, NSLayoutConstraint;
@protocol LocationUIProtocol;

@interface CLLocationButton : UIControl <NSSecureCoding> {
    _UISlotView *_slotView;
    UIColor *_backgroundColor;
    UIColor *_tintColor;
    UIColor *_resolvedBackgroundColor;
    UIColor *_resolvedTintColor;
    NSString *_sandboxExtension;
    struct CGSize { double width; double height; } _intrinsicSize;
    NSLayoutConstraint *_minimumWidthConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
    id<LocationUIProtocol> _proxy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<LocationUIProtocol> locationUIProxy;
@property (readonly, nonatomic) BOOL colorsIllegible;
@property (readonly, nonatomic) BOOL alphaInsufficient;
@property (nonatomic) long long icon;
@property (nonatomic) long long label;
@property (nonatomic) double fontSize;
@property (nonatomic) double cornerRadius;

- (void)setBackgroundColor:(id)a0;
- (id)init;
- (void)_populateArchivedSubviews:(id)a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)backgroundColor;
- (void)encodeWithCoder:(id)a0;
- (void)setTintColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tintColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_sendActionsForEvents:(unsigned long long)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned int)_secureName;
- (void)_setupSlotView;
- (void)markDirty;
- (void)_actionForPreSetTarget;
- (id)_computeLocationButtonTag;
- (void)_yieldSlotViewContentForLayerContextID:(unsigned long long)a0 slotStyle:(id)a1 withYieldBlock:(id /* block */)a2;

@end
