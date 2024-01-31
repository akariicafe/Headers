@class NSString;

@interface _UIKeyboardChangedInformation : _UIKeyboardUIInformation

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardPositionWithIAV;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardPositionWithRemoteIAV;
@property (readonly) double keyboardIAVHeight;
@property BOOL isFloating;
@property (nonatomic) BOOL avoidIntersectability;
@property (nonatomic) BOOL multipleScenes;
@property (nonatomic) BOOL automaticMinimizationEnabled;
@property (nonatomic) BOOL shouldTakeSnapshot;
@property (readonly) BOOL shouldRestoreKeyboard;
@property (copy, nonatomic) NSString *sourceSceneIdentityString;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;
@property (copy, nonatomic) NSString *hostBundleIdentifier;
@property (nonatomic) int hostProcessIdentifier;
@property (copy, nonatomic) NSString *sourceDisplayIdentifier;
@property (copy, nonatomic) NSString *keyboardPreserveKey;

+ (BOOL)supportsSecureCoding;
+ (id)informationForKeyboardUpWithIAVHeight:(double)a0;
+ (id)informationForKeyboardDown;
+ (id)informationForKeyboardRestore:(id)a0;
+ (id)informationForKeyboardPreserve:(id)a0;
+ (id)informationForKeyboardUp:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withIAV:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)animationFence;

- (void)dealloc;
- (id)initWithKeyboardRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 iavPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 onScreen:(BOOL)a2 takeSnapshot:(BOOL)a3 fence:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithoutIAVKeyboardRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithIntersectability:(BOOL)a0;
- (id)description;
- (id)copyWithoutFence;
- (id)initWithKeyboardIAVHeight:(double)a0 onScreen:(BOOL)a1 takeSnapshot:(BOOL)a2 fence:(id)a3;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
