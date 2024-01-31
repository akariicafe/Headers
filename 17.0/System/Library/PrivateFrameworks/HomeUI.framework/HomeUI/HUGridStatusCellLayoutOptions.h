@class UIFont;

@interface HUGridStatusCellLayoutOptions : HUGridCellLayoutOptions

@property (retain, nonatomic) UIFont *descriptionFont;
@property (retain, nonatomic) UIFont *largeDescriptionFont;
@property (nonatomic) double descriptionInnerMargin;
@property (nonatomic) unsigned long long numberOfTitleLines;
@property (nonatomic) double backgroundSize;
@property (nonatomic) double badgeSize;
@property (nonatomic) double estimatedCellWidth;
@property (readonly, nonatomic) double cellHeight;
@property (readonly, nonatomic) double cellSpacing;
@property (readonly, nonatomic) double cellToBackgroundHorizontalSpacing;
@property (readonly, nonatomic) double backgroundToTitleSpacing;

+ (id)defaultOptionsForCellSizeSubclass:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGPoint { double x0; double x1; })badgeOffsetForUserInterfaceLayoutDirection:(long long)a0;
- (double)cellWidthForAttributedTitle:(id)a0 shortTitle:(id)a1;
- (double)cellWidthForTitle:(id)a0 shortTitle:(id)a1;
- (long long)titleAlignmentForUserInterfaceLayoutDirection:(long long)a0;

@end
