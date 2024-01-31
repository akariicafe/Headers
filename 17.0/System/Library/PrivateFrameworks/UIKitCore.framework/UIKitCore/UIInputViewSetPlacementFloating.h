@class NSString, NSArray, UIInputViewSetPlacementOnScreen, UIView;

@interface UIInputViewSetPlacementFloating : UIInputViewSetPlacementUndocked <_UIGeometryChangeObserver, NSSecureCoding> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _responderRect;
    struct CGSize { double width; double height; } _lastSize;
    UIInputViewSetPlacementOnScreen *_cachedSecondaryPlacement;
    NSArray *_subPlacements;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double floatingWidth;
@property (weak, nonatomic) UIView *responderToFollow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placementWithUndockedOffset:(struct CGPoint { double x0; double x1; })a0 chromeBuffer:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 floatingWidth:(double)a2;
+ (id)infoWithPoint:(struct CGPoint { double x0; double x1; })a0 forOwner:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameAtOffset:(struct CGPoint { double x0; double x1; })a0 keyboardSize:(struct CGSize { double x0; double x1; })a1 screenSize:(struct CGSize { double x0; double x1; })a2;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (BOOL)accessoryViewWillAppear;
- (BOOL)isFloatingAssistantView;
- (BOOL)isFloating;
- (id)assistantView;
- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)a0 forAncestor:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)showsEditItems;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustBoundsForNotificationsWithOwner:(id)a0;
- (id)applicatorInfoForOwner:(id)a0;
- (void)checkSizeForOwner:(id)a0;
- (id)currentResponderView;
- (id)expiringPlacement;
- (id)horizontalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (unsigned long long)indexForPurpose:(unsigned long long)a0;
- (void)setSubPlacements:(id)a0;
- (id)subPlacements;
- (void)updateChromeBuffer;
- (id)widthConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;

@end
