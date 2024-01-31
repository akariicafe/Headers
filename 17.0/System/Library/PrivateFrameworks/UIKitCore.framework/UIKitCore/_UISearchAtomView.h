@class UIFont, NSString, NSArray, UIImageView, _UISearchAtomBackgroundView, _UISearchAtomViewVisualStyle, NSLayoutConstraint, UILabel, UIColor;
@protocol NSCopying;

@interface _UISearchAtomView : UIView <_UIVisualStyleStylable, _UIAtomTextViewAtomLayout> {
    struct { unsigned char enabled : 1; } _flags;
    UIColor *_customAtomForegroundColor;
}

@property (class, readonly, nonatomic) id<NSCopying> visualStyleRegistryIdentity;

@property (retain, nonatomic) _UISearchAtomBackgroundView *backgroundView;
@property (readonly, nonatomic) _UISearchAtomViewVisualStyle *visualStyle;
@property (copy, nonatomic) NSArray *defaultConstraints;
@property (retain, nonatomic) NSLayoutConstraint *maximumAtomWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageCenterYConstraint;
@property (copy, nonatomic) NSArray *withImageConstraints;
@property (copy, nonatomic) NSArray *withoutImageConstraints;
@property (retain) UILabel *textLabel;
@property (retain) UIImageView *leadingImage;
@property (retain, nonatomic) UIColor *atomBackgroundColor;
@property (retain, nonatomic) UIFont *atomFont;
@property (nonatomic) double viewportWidth;
@property (retain, nonatomic, setter=_setAtomForegroundColor:) UIColor *_atomForegroundColor;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long selectionStyle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectionBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)_defaultAtomForegroundColorForTraitCollection:(id)a0;
+ (id)defaultAtomBackgroundColorForTraitCollection:(id)a0;

- (void)_updateColors;
- (id)viewForLastBaselineLayout;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelectionStyle:(long long)a0 animated:(BOOL)a1;

@end
