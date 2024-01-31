@class UIView, NSTimer, STUIStatusBarItem, NSString, STUIStatusBarAction, STUIStatusBarRegion, STUIStatusBarStyleAttributes, STUIStatusBarDisplayItemPlacement, NSMutableIndexSet, STUIStatusBarIdentifier;
@protocol UILayoutItem, STUIStatusBarDisplayable;

@interface STUIStatusBarDisplayItem : NSObject <BSDebugDescriptionProviding, STUIStatusBarPrioritized, STUIStatusBarActionable> {
    BOOL _wasPreviouslyDisabledWithToken;
}

@property (retain, nonatomic) NSMutableIndexSet *disablingTokens;
@property (retain, nonatomic) NSTimer *floatingTimer;
@property (retain, nonatomic) id<UILayoutItem> layoutItem;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *placement;
@property (nonatomic) BOOL needsAddingToLayout;
@property (readonly, copy, nonatomic) STUIStatusBarIdentifier *identifier;
@property (readonly, weak, nonatomic) STUIStatusBarItem *item;
@property (readonly, nonatomic) id<STUIStatusBarDisplayable> displayable;
@property (readonly, nonatomic) UIView<STUIStatusBarDisplayable> *view;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL visible;
@property (nonatomic, getter=isBackground) BOOL background;
@property (nonatomic) double alpha;
@property (nonatomic) double viewAlpha;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } viewTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } absoluteFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } absolutePresentationFrame;
@property (nonatomic) double baselineOffset;
@property (nonatomic) double centerOffset;
@property (retain, nonatomic) STUIStatusBarStyleAttributes *overriddenStyleAttributes;
@property (nonatomic) long long overriddenVerticalAlignment;
@property (weak, nonatomic) STUIStatusBarRegion *region;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL dynamicallyHidden;
@property (nonatomic) double dynamicHidingAlpha;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } dynamicHidingTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } dynamicScaleTransform;
@property (nonatomic) double additionalDynamicPadding;
@property (nonatomic) BOOL floating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long priority;
@property (retain, nonatomic) STUIStatusBarAction *action;
@property (retain, nonatomic) STUIStatusBarAction *hoverAction;
@property (readonly, nonatomic) UIView *hoverView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } absoluteHoverFrame;
@property (readonly, nonatomic) BOOL hoverHighlightsAsRegion;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } extendedHoverInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } actionInsets;

- (void)_detectedErrorInFloatingState;
- (void)disableWithToken:(unsigned long long)a0;
- (BOOL)clearPreviousTokenDisablementIfNecessary;
- (id)succinctDescriptionBuilder;
- (id)initWithIdentifier:(id)a0 item:(id)a1;
- (void)applyStyleAttributes:(id)a0;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 forDebug:(BOOL)a1;
- (void)_updateComputedAlpha;
- (void)_updateComputedTransform;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)enableWithToken:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;

@end
