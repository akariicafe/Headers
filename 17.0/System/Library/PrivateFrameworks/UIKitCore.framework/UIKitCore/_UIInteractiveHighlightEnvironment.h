@class UIView, NSArray, NSUUID, UIViewPropertyAnimator, UIScreen, _UIInteractiveHighlightEffectWindow, UIVisualEffectView, UIViewFloatAnimatableProperty;

@interface _UIInteractiveHighlightEnvironment : NSObject {
    UIScreen *_containerScreen;
    _UIInteractiveHighlightEffectWindow *_containerWindow;
    UIVisualEffectView *_backgroundEffectView;
    UIView *_contentView;
    UIView *_contentClipView;
    UIView *_contentOverlayView;
    UIViewPropertyAnimator *_backgroundEffectAnimator;
    UIViewFloatAnimatableProperty *_backgroundEffectProgress;
    NSArray *_viewRecords;
    _UIInteractiveHighlightEnvironment *_parentEnvironment;
    _UIInteractiveHighlightEnvironment *_childEnvironment;
    NSUUID *_backgroundAnimationIdentifier;
}

@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *contentClipView;
@property (retain, nonatomic) UIView *customBackgroundEffectView;
@property (copy, nonatomic) id /* block */ backgroundEffectApplyBlock;

+ (id)interactiveHighlightEnvironmentForContainerView:(id)a0;
+ (id)requestInteractiveHighlightEnvironmentForView:(id)a0;

- (id)initWithContainerView:(id)a0;
- (void)reset;
- (void)dealloc;
- (id)contentView;
- (void).cxx_destruct;
- (void)finalizeContainerWindowIfNeeded;
- (void)applyBackgroundEffectWithMagnitude:(double)a0 interactive:(BOOL)a1 completion:(id /* block */)a2;
- (void)applyContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)backgroundVisualEffectForProgress:(double)a0;
- (void)disableClippingForView:(id)a0 ancestorView:(id)a1;
- (void)finalizeBackgroundEffect;
- (void)finalizeContentViewIfNeeded;
- (void)finalizeViewRecord:(id)a0;
- (long long)indexOfViewRecordForView:(id)a0;
- (void)initBackgroundEffectViewIfNeeded;
- (void)initContainerWindowIfNeeded;
- (void)initContentViewIfNeeded;
- (id)initWithContainerScreen:(id)a0;
- (id)initWithParentEnvironment:(id)a0;
- (id)interactiveHighlightEffectForView:(id)a0 options:(unsigned long long)a1;
- (id)newBackgroundEffectAnimator;
- (id)newViewRecordForView:(id)a0 options:(unsigned long long)a1;
- (void)removeAllViewRecords;
- (void)removeInteractiveHighlightEffect:(id)a0;
- (void)removeViewRecordsIfNeeded;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setUserInteractionOnContainerEnabled:(BOOL)a0;

@end
