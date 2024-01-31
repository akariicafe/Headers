@interface UIInputViewSetPlacementInvisibleForFloatingAssistantTransition : UIInputViewSetPlacementInvisible <NSSecureCoding> {
    UIInputViewSetPlacementInvisibleForFloatingAssistantTransition *_cachedSecondaryPlacement;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (double)alpha;
- (BOOL)isFloatingAssistantView;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void).cxx_destruct;
- (BOOL)isCompactAssistantView;
- (id)subPlacements;

@end
