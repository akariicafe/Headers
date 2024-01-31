@class UIColor, UITraitCollection;

@interface PXGViewEnvironment : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL checkmarkEmphasized;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) struct CGColor { } *checkmarkColor;
@property (readonly, nonatomic) struct CGColor { } *focusRingColor;
@property (readonly, nonatomic) BOOL accessibilityEnabled;
@property (readonly, nonatomic) BOOL wantsFocusRing;
@property (readonly, nonatomic) BOOL emphasized;
@property (readonly, nonatomic) BOOL isBeingFullPageSnapshotted;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)hasDifferentColorAppearanceComparedTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithView:(id)a0 accessibilityEnabled:(BOOL)a1 isBeingFullPageSnapshotted:(BOOL)a2;

@end
