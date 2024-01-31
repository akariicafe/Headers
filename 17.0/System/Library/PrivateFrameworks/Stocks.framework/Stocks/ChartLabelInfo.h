@class NSString;

@interface ChartLabelInfo : NSObject

@property (retain, nonatomic) NSString *string;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double position;
@property (readonly, nonatomic) BOOL immutable;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setImmutable:(BOOL)a0;
- (void)retainStringAndSizeFromLabelInfo:(id)a0;
- (void)setStringToMonthAndDayWithDate:(id)a0 timeZone:(id)a1;
- (void)setStringToYearWithDate:(id)a0 timeZone:(id)a1;

@end
