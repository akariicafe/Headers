@class UIColor;

@interface _SFAccountManagerAppearanceValues : NSObject

@property (class, readonly, nonatomic) UIColor *defaultMonogramBackgroundColor;
@property (class, readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsetsForTopLevelCells;
@property (class, readonly, nonatomic) UIColor *buttonCellTextColor;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chicletSize;
+ (double)chicletCornerRadius;
+ (long long)preferencesTableViewStyle;
+ (id)subtitleFontForLargerCell;
+ (id)subtitleFontForNarrowCell;
+ (id)subtitleFontForStackViewLabel;
+ (id)titleFontForLargerCell;
+ (id)titleFontForNarrowCell;
+ (id)titleFontForStackViewLabel;

@end
