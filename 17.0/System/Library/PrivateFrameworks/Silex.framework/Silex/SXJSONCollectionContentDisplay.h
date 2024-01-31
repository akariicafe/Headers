@class NSString;

@interface SXJSONCollectionContentDisplay : SXJSONObject <SXCollectionContentDisplay>

@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } minimumWidth;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } maximumWidth;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } gutter;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } rowSpacing;
@property (readonly, nonatomic) unsigned long long alignment;
@property (readonly, nonatomic) unsigned long long distribution;
@property (readonly, nonatomic) unsigned long long widows;
@property (readonly, nonatomic) BOOL variableSizing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typeString;

- (unsigned long long)distributionWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)alignmentWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)widowsWithValue:(id)a0 withType:(int)a1;

@end
