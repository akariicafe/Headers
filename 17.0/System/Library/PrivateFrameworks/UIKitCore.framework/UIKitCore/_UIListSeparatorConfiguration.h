@class UIColor;

@interface _UIListSeparatorConfiguration : UIListSeparatorConfiguration

@property (nonatomic, getter=_insets, setter=_setInsets:) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } _insets;
@property (nonatomic, getter=_insetsForBoundarySeparators, setter=_setInsetsForBoundarySeparators:) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _insetsForBoundarySeparators;
@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *_color;
@property (retain, nonatomic, getter=_multipleSelectionColor, setter=_setMultipleSelectionColor:) UIColor *_multipleSelectionColor;
@property (nonatomic, getter=_shouldAdjustColorForMultipleSelection, setter=_setAdjustColorForMultipleSelection:) BOOL _adjustColorForMultipleSelection;
@property (nonatomic, getter=_hidingBehavior, setter=_setHidingBehavior:) long long _hidingBehavior;
@property (nonatomic, getter=_insetAdjustmentBehaviour, setter=_setInsetAdjustmentBehavior:) long long _insetAdjustmentBehavior;

+ (BOOL)supportsSecureCoding;
+ (id)_configurationForAppearanceStyle:(long long)a0 inLayoutEnvironment:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
