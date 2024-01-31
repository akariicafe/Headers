@class UIFont;

@interface HUFilterCategoryCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) double iconToTextPadding;
@property (nonatomic) double innerTopMargin;
@property (nonatomic) double innerBottomMargin;
@property (nonatomic) double innerLeadingMargin;
@property (nonatomic) double innerTrailingMargin;
@property (retain, nonatomic) UIFont *primaryTextFont;
@property (retain, nonatomic) UIFont *secondaryTextFont;
@property (readonly, nonatomic) double cellHeight;
@property (readonly, nonatomic) double cellSpacing;

+ (id)defaultOptionsForCellSizeSubclass:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
