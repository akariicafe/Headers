@class PXExtendedTraitCollection, UIColor, PXLayoutMetricInterpolator;

@interface PXGadgetSpec : NSObject

@property (class, readonly, nonatomic) PXLayoutMetricInterpolator *horizontalContentInsetsInterpolator;

@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) PXExtendedTraitCollection *rootExtendedTraitCollection;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) long long scrollAxis;
@property (readonly, nonatomic) BOOL shouldInsetAllContent;
@property (readonly, nonatomic) double interItemSpacing;
@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) long long layoutSizeClass;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly, nonatomic) long long layoutDirection;
@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) double layoutReferenceWidth;
@property (readonly, nonatomic) double layoutReferenceHeight;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutInsets;
@property (readonly, nonatomic) double fixedColumnWidth;
@property (readonly, nonatomic) BOOL shouldUseAccessibilityLayout;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } accessoryViewInset;

+ (double)sectionHeaderHeightForStyle:(unsigned long long)a0 dividerHidden:(BOOL)a1;
+ (double)sectionHeaderTitleBottomSpacingForStyle:(unsigned long long)a0;
+ (double)sectionHeaderTitleHeightForStyle:(unsigned long long)a0 dividerHidden:(BOOL)a1;
+ (double)sectionHeaderTopSpacingForStyle:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })acccessoryViewInsetForTraitCollection:(id)a0;
- (double)columnSpacingForColumnSpan:(long long)a0;
- (double)columnWidthForColumnSpan:(long long)a0;
- (id)initWithTraitCollection:(id)a0 scrollAxis:(long long)a1;
- (BOOL)isEqualToGadgetSpec:(id)a0;
- (BOOL)shouldInsetContentForTraitCollection:(id)a0;

@end
