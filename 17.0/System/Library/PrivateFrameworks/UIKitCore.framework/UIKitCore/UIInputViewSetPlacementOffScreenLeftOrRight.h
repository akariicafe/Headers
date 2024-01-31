@class UIInputViewSetPlacement;

@interface UIInputViewSetPlacementOffScreenLeftOrRight : UIInputViewSetPlacement <NSSecureCoding> {
    UIInputViewSetPlacement *_otherPlacement;
}

@property (class, readonly) BOOL supportsSecureCoding;


- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (void).cxx_destruct;
- (void)setOtherPlacement:(id)a0;

@end
