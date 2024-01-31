@class UITraitCollection;

@interface MFComposeDisplayMetrics : NSObject

@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } layoutMargins;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (readonly, nonatomic) BOOL isCompactHeight;
@property (readonly, nonatomic) double trailingButtonMidlineOffset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } sendBarButtonItemImageInsets;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } headerViewSeparatorInset;

+ (id)displayMetricsWithTraitCollection:(id)a0 layoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;

- (void).cxx_destruct;

@end
