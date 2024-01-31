@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGPoint { double x; double y; } normalizedOffset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } chromeBuffer;

+ (id)placementWithUndockedOffset:(struct CGPoint { double x0; double x1; })a0 chromeBuffer:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (struct CGPoint { double x0; double x1; })computeOffsetForOffset:(struct CGPoint { double x0; double x1; })a0 withSize:(struct CGSize { double x0; double x1; })a1 chromeBuffer:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 onScreenSize:(struct CGSize { double x0; double x1; })a3;
+ (id)infoWithPoint:(struct CGPoint { double x0; double x1; })a0;

- (BOOL)isUndocked;
- (void)setOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })remoteIntrinsicContentSizeForInputViewInSet:(id)a0 includingIAV:(BOOL)a1;
- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (BOOL)inputViewWillAppear;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)applicatorInfoForOwner:(id)a0;
- (double)heightOfInputViews:(id)a0;
- (void)updateChromeBuffer;

@end
