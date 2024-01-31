@class _UIAssertionController, NSString, NSLayoutConstraint;

@interface UIKeyboardLayoutGuide : UITrackingLayoutGuide <_UIAssertionControllerSubject>

@property (nonatomic) struct UIOffset { double horizontal; double vertical; } previousOffset;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) BOOL hasPausedEdges;
@property (retain, nonatomic) NSLayoutConstraint *viewBottomConstraint;
@property (nonatomic) BOOL ignoresSafeArea;
@property (nonatomic) BOOL ignoreKeyboardChanges;
@property (nonatomic) long long followTypes;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } interactionResetOffset;
@property (nonatomic) struct CGSize { double width; double height; } interactionResetSize;
@property (readonly, nonatomic) _UIAssertionController *_assertionController;
@property (nonatomic, getter=isDocked) BOOL docked;
@property (nonatomic) long long currentKeyboardVisualState;
@property (nonatomic, getter=isWindowGuide) BOOL windowGuide;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (nonatomic) BOOL addsHeightWhenUndocked;
@property (nonatomic) BOOL followsUndockedKeyboard;
@property (nonatomic) BOOL usesBottomSafeArea;
@property (nonatomic) double keyboardDismissPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldPauseEdgesForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)assertionActivationStateForType:(unsigned long long)a0;
- (BOOL)moveGuideOffscreenAtEdge:(unsigned long long)a0;
- (id)init;
- (BOOL)_changeSizingConstants:(struct CGSize { double x0; double x1; })a0 force:(BOOL)a1;
- (void)disableSynchronizingWithKeyboard;
- (void)forceDismissGuideAnimated:(BOOL)a0;
- (void)reenableSynchronizingWithKeyboard;
- (void)inheritOptionsFromGuide:(id)a0;
- (void)assertionActivationStateChangedToState:(BOOL)a0 forType:(unsigned long long)a1;
- (BOOL)_changeOffsetConstants:(struct UIOffset { double x0; double x1; })a0 force:(BOOL)a1;
- (void)_detachGuideFromKeyboard:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setTransitioning:(BOOL)a0;
- (struct CGSize { double x0; double x1; })defaultKeyboardSizeForInputMode:(id)a0 orientation:(long long)a1 addingAssistant:(BOOL)a2;
- (void)followUndockedKeyboardOfTypes:(long long)a0;
- (BOOL)currentStateIsDocked;
- (BOOL)_moveGuideOffscreenAtEdge:(unsigned long long)a0 force:(BOOL)a1;
- (void)updateSizeForInputMode:(id)a0 orientation:(long long)a1 showsAssistantBar:(BOOL)a2 animated:(BOOL)a3;
- (void)forceResizeGuideForOrientation:(long long)a0 showsAssistantBar:(BOOL)a1 animated:(BOOL)a2;
- (id)_obtainTransitionAssertionForReason:(id)a0;
- (BOOL)keyboardStateIsDocked:(long long)a0;
- (BOOL)changeSizingConstants:(struct CGSize { double x0; double x1; })a0;
- (void)constrainToReference:(id)a0;
- (void).cxx_destruct;
- (void)updateShouldPauseEdges:(BOOL)a0;
- (BOOL)changeOffsetConstants:(struct UIOffset { double x0; double x1; })a0;
- (void)resetGuideForCancelledDismissInteraction;
- (void)forceResizeGuideForInputMode:(id)a0 orientation:(BOOL)a1 showsAssistantBar:(BOOL)a2 animated:(BOOL)a3;
- (BOOL)shouldFollowCurrentKeyboard;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)updateBottomConstraint;

@end
