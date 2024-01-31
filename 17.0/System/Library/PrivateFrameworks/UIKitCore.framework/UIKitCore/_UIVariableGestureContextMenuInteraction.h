@interface _UIVariableGestureContextMenuInteraction : UIContextMenuInteraction {
    struct { unsigned char presentOnTouchDown : 1; } _flags;
}

@property (nonatomic, setter=_setPresentOnTouchDown:) BOOL _presentOnTouchDown;
@property (nonatomic, setter=_setPrefersCompactAppearance:) BOOL _prefersCompactAppearance;

- (BOOL)_clickPresentationInteractionShouldPlayFeedback:(id)a0;
- (long long)menuAppearance;
- (void)didMoveToView:(id)a0;
- (void)_willBeginWithConfiguration:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)_interactionDrivers;

@end
