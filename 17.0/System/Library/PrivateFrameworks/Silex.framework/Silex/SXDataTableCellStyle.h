@class UIColor, NSString, NSArray, SXPadding, SXDataTableBorderSides, SXJSONArray;

@interface SXDataTableCellStyle : SXDataTableElementStyle

@property (readonly, nonatomic) NSString *textStyle;
@property (readonly, nonatomic) NSArray *textStyles;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) SXDataTableBorderSides *border;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } height;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } minimumWidth;
@property (readonly, nonatomic) SXPadding *padding;
@property (readonly, nonatomic) unsigned long long verticalAlignment;
@property (readonly, nonatomic) unsigned long long horizontalAlignment;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, nonatomic) SXJSONArray *selectors;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;

- (unsigned long long)horizontalAlignmentWithValue:(id)a0 withType:(int)a1;
- (id)paddingWithValue:(id)a0 withType:(int)a1;
- (id)textStylesWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)verticalAlignmentWithValue:(id)a0 withType:(int)a1;

@end
