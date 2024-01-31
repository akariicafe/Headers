@class UIFont;

@interface HUGridSceneCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) double iconInnerHorizontalMargin;
@property (nonatomic) double titleInterLineSpacing;
@property (nonatomic) double titleDescriptionLineSpacing;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (nonatomic) double cellHeight;
@property (nonatomic) unsigned long long numberOfTitleLines;

+ (id)defaultOptionsForCellSizeSubclass:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
