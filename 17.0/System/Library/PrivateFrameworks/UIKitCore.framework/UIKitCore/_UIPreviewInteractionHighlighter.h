@class UIControl, NSString, NSArray, _UIInteractiveHighlightEffect, UIView, NSUUID;
@protocol _UIInteractiveHighlighting, UIInteraction;

@interface _UIPreviewInteractionHighlighter : NSObject <UIInteractionEffect> {
    id<_UIInteractiveHighlighting> _interactiveHighlightView;
    UIControl *_compatibilityHighlightView;
    _UIInteractiveHighlightEffect *_interactiveHighlightEffect;
    NSArray *_accessoryHighlightEffects;
    _UIInteractiveHighlightEffect *_presentationControllerHighlightEffect;
    id<UIInteraction> _interaction;
    BOOL _active;
    BOOL _animatesContentEffects;
    NSUUID *_contentAnimationIdentifier;
    BOOL _animatesBackgroundEffects;
    long long _preferredAnimationStyle;
    double _preferredMinimumScale;
    double _preferredMaximumScale;
}

@property (nonatomic) BOOL shouldApplyEffectsOnProxyView;
@property (nonatomic) BOOL shouldEndWithCancelAnimation;
@property (nonatomic) unsigned long long clickEffectPhase;
@property (readonly, nonatomic) _UIInteractiveHighlightEffect *interactiveHighlightEffect;
@property (copy, nonatomic) id /* block */ privateCompletionBlock;
@property (weak, nonatomic) UIView *customContainerView;
@property (retain, nonatomic) UIView *customBackgroundEffectView;
@property (nonatomic) BOOL shouldTransferViewOwnership;
@property (nonatomic) BOOL shouldApplyContentEffects;
@property (nonatomic) BOOL shouldApplyBackgroundEffects;
@property (nonatomic) BOOL cancelsInteractionWhenScrolling;
@property (copy, nonatomic) id /* block */ backgroundEffectApplyBlock;
@property (readonly, weak, nonatomic) UIView *view;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)interaction:(id)a0 didChangeWithContext:(id)a1;
- (void)_animateAlongsideViewControllerPresentationDismiss;
- (void)_animateForDelayedViewControllerPresentation;
- (void)_applyHighlightEffectsToViewControllerDuringCancellation:(id)a0;
- (void)_delayedViewControllerPresentationDidCancel;
- (void)_finalizeAfterInteraction;
- (void)_finalizeAfterInteractionIfNeeded;
- (void)_prepareAccessoryViewsForScrollView:(id)a0 environment:(id)a1;
- (void)_prepareContentEffectsForInteraction:(id)a0;
- (void)_prepareForInteraction:(id)a0;
- (void)_prepareForViewControllerPresentation:(id)a0;
- (void)_setHighlighted:(BOOL)a0 forViewIfNeeded:(id)a1;
- (void)_updateFromInteraction:(id)a0 fractionComplete:(double)a1 ended:(BOOL)a2;
- (void)_viewControllerPresentationDidEnd;

@end
