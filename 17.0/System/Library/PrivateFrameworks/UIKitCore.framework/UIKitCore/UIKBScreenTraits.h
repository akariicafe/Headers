@class UIScreen;

@interface UIKBScreenTraits : NSObject {
    BOOL _isEmulatingIdiom;
    long long _idiomToEmulate;
    BOOL _isFirstPartyStickers;
    BOOL _isEmojiPosterOniPad;
}

@property (nonatomic) long long preferredEmojiScrollingDirection;
@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) long long idiom;
@property (readonly, nonatomic) BOOL knobInput;
@property (readonly, nonatomic) BOOL touchInput;
@property (readonly, nonatomic) BOOL touchpadInput;
@property (nonatomic) long long orientation;
@property (nonatomic) double keyboardWidth;
@property (nonatomic) double assistantViewWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } assistantViewWindowBounds;
@property (readonly, nonatomic) BOOL isKeyboardMinorEdgeWidth;
@property (nonatomic) double keyboardBarHeight;
@property (readonly, nonatomic) BOOL isInPopover;
@property (readonly, nonatomic) BOOL isFloating;
@property (nonatomic) BOOL isSplit;
@property (nonatomic) BOOL supportsSplit;
@property (nonatomic) BOOL centerFilled;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } keyboardScreenReferenceSize;
@property (nonatomic) struct CGSize { double width; double height; } stretchFactor;
@property (readonly, nonatomic) BOOL isLinear;
@property (readonly, nonatomic) BOOL isEmojiScrollingDirectionVertical;
@property (nonatomic) BOOL resizeKeyboardHeight;
@property (nonatomic) double keyboardHeightAdjustment;

+ (id)traitsWithScreen:(id)a0 orientation:(long long)a1;
+ (id)_activeUCBWindowForScreen:(id)a0;
+ (id)fullScreenTraitsWithScreen:(id)a0 orientation:(long long)a1;
+ (id)traitsForPopoverEmulatingWidth:(double)a0 minorEdge:(BOOL)a1 orientation:(long long)a2 idiom:(long long)a3;
+ (id)traitsWithScreen:(id)a0 orientation:(long long)a1 ignoreRemoteKeyboard:(BOOL)a2;
+ (id)_activeKeyboardWindowForScreen:(id)a0;
+ (void)setMockIdiom:(long long)a0;
+ (id)traitsForInputModeWithScreen:(id)a0;

- (id)initForInputModeWithScreen:(id)a0;
- (void)updateForTextInputTraits:(id)a0 supportedInteractionModel:(unsigned long long)a1;
- (id)description;
- (id)initWithScreen:(id)a0 orientation:(long long)a1 allowFloating:(BOOL)a2 ignoreRemoteKeyboard:(BOOL)a3;
- (void).cxx_destruct;
- (void)updateForLinearLayout:(BOOL)a0;

@end
