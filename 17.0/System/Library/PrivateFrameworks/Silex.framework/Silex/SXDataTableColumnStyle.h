@class UIColor, SXDataTableBorder, SXJSONArray;

@interface SXDataTableColumnStyle : SXDataTableElementStyle

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) SXDataTableBorder *divider;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } minimumWidth;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, nonatomic) SXJSONArray *selectors;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;

@end
