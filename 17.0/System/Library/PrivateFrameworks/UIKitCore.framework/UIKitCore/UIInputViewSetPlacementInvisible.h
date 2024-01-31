@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacementWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)placementWithPlacement:(id)a0;

- (BOOL)isUndocked;
- (BOOL)isInteractive;
- (double)alpha;
- (BOOL)showsInputOrAssistantViews;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (BOOL)isVisible;
- (BOOL)showsInputViews;
- (BOOL)inputViewWillAppear;
- (BOOL)showsKeyboard;
- (id)applicatorInfoForOwner:(id)a0;

@end
