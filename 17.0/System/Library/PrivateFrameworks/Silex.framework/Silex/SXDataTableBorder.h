@class UIColor, SXUnitConverter;

@interface SXDataTableBorder : SXJSONObject

@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } actualWidth;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) UIColor *color;
@property (retain, nonatomic) SXUnitConverter *unitConverter;

+ (id)jsonPropertyNameForObjCPropertyName:(id)a0;

- (void).cxx_destruct;

@end
