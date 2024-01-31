@class STUIStatusBarDisplayItem, NSDictionary, STUIStatusBarAction, NSMutableIndexSet, UILayoutGuide, NSOrderedSet, UIView, STUIStatusBar, NSString, NSSet, NSLayoutConstraint, NSArray, STUIStatusBarStyleAttributes;
@protocol UILayoutItem, STUIStatusBarRegionLayout;

@interface STUIStatusBarRegion : NSObject <BSDebugDescriptionProviding, STUIStatusBarActionable>

@property (retain, nonatomic) NSMutableIndexSet *disablingTokens;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *centerXConstraint;
@property (retain, nonatomic) NSLayoutConstraint *centerYConstraint;
@property (readonly, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *frozenView;
@property (readonly, nonatomic) NSArray *enabledDisplayItems;
@property (readonly, nonatomic) NSArray *currentEnabledDisplayItems;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) STUIStatusBar *statusBar;
@property (readonly, nonatomic) id<UILayoutItem> layoutItem;
@property (readonly, nonatomic) id<UILayoutItem> containerItem;
@property (retain, nonatomic) id<STUIStatusBarRegionLayout> layout;
@property (retain, nonatomic) NSSet *dependentRegionIdentifiers;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (weak, nonatomic) STUIStatusBarRegion *enabilityRegion;
@property (nonatomic) BOOL offsetable;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } offset;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (nonatomic) double alpha;
@property (readonly, nonatomic) long long effectiveStyle;
@property (nonatomic) long long style;
@property (nonatomic) long long automaticStyle;
@property (nonatomic) long long overriddenStyle;
@property (retain, nonatomic) STUIStatusBarStyleAttributes *overriddenStyleAttributes;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) NSOrderedSet *displayItems;
@property (readonly, nonatomic) STUIStatusBarDisplayItem *overflowedDisplayItem;
@property (readonly, copy, nonatomic) NSDictionary *displayItemAbsoluteFrames;
@property (readonly, copy, nonatomic) NSDictionary *displayItemAbsolutePresentationFrames;
@property (nonatomic) BOOL needsReLayout;
@property (nonatomic) BOOL disableItemFrameBasedOverflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) STUIStatusBarAction *action;
@property (retain, nonatomic) STUIStatusBarAction *hoverAction;
@property (readonly, nonatomic) UIView *hoverView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } absoluteHoverFrame;
@property (readonly, nonatomic) BOOL hoverHighlightsAsRegion;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } extendedHoverInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } actionInsets;

- (id)initWithIdentifier:(id)a0;
- (void)disableWithToken:(unsigned long long)a0;
- (void)setIdentifier:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)enableWithToken:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)displayItemForHUDAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)succinctDescription;
- (void)_addSubview:(id)a0 atBack:(BOOL)a1;
- (void)_overriddenStyleAttributesChanged;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
