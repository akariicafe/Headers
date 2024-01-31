@class NSMutableArray, NSArray, SiriSharedUIAnimationContext, UIView, PLPlatterView, SiriSharedUIViewStackConstraints;
@protocol SiriSharedUICompactAdditionalContentViewDelegate, SiriSharedUIStackableContentDelegate;

@interface SiriSharedUICompactAdditionalContentView : SiriSharedUIStandardView <SiriSharedUICompactAdditionalContentViewHosting> {
    long long _platterCategory;
    PLPlatterView *_platterView;
    UIView *_containerView;
    BOOL _requestedAppearanceAnimation;
    BOOL _runningAnimatedFadeOut;
    BOOL _runningPrepareForUpdates;
    NSMutableArray *_prepareForUpdatesPendingCompletionBlocks;
}

@property (retain, nonatomic) UIView *snippetContainerView;
@property (weak, nonatomic) id<SiriSharedUICompactAdditionalContentViewDelegate> delegate;
@property (copy, nonatomic) NSArray *snippetViews;
@property (nonatomic) BOOL isInAmbient;
@property (weak, nonatomic) id<SiriSharedUIStackableContentDelegate> stackContainerDelegate;
@property (nonatomic) long long attachmentType;
@property (nonatomic) double attachmentYOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } portraitContentSize;
@property (retain, nonatomic) SiriSharedUIViewStackConstraints *stackConstraints;
@property (nonatomic) BOOL useLowerPriorityHeightConstraint;
@property (retain, nonatomic) NSArray *customAttachmentConstraints;
@property (retain, nonatomic) SiriSharedUIAnimationContext *animationContextForFrameAndLayoutUpdate;

- (id)hostingView;
- (void)relayout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_fittingSize;
- (void)_setupSubviews;
- (void)updateContentSizeWithAnimation:(BOOL)a0;
- (id)_conversationDisappearAnimation;
- (BOOL)layerHasOpacity;
- (void)_adjustCornerRadiusForSnippetView:(id)a0;
- (long long)_animatedPresentationType;
- (id)_conversationAppearAnimation;
- (struct CGSize { double x0; double x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })a0 forSnippet:(id)a1;
- (struct CGSize { double x0; double x1; })_sizeThatFitsAllSnippets:(struct CGSize { double x0; double x1; })a0;
- (void)animateAppearanceIfNeeded;
- (void)animateFadeOutWithCompletion:(id /* block */)a0;
- (void)didCompleteAnimatedFadeOut;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 platterCategory:(long long)a1;
- (id)prepareForUpdatesPendingCompletionBlocks;
- (void)prepareForUpdatesToSnippetViews:(BOOL)a0;
- (void)snippetContentDidUpdate;

@end
