@class NSString;

@interface SXRepeatableImageFill : SXFill

@property (readonly, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } width;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } height;
@property (readonly, nonatomic) unsigned long long repeat;

- (unsigned long long)repeatWithValue:(id)a0 withType:(int)a1;

@end
