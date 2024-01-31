@interface UIInputViewSetPlacementInvisibleForFloatingTransition : UIInputViewSetPlacementInvisible <NSSecureCoding> {
    BOOL _isFloatingAssistantView;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)placementWithPlacement:(id)a0;
+ (id)placementWithPlacement:(id)a0 forFloatingAssistantViewTransition:(BOOL)a1;

- (BOOL)isFloatingAssistantView;
- (id)assistantView;
- (BOOL)showsEditItems;
- (BOOL)isHiddenForFloatingTransition;

@end
