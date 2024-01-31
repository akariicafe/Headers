@class SXJSONArray, NSString;
@protocol SXEdgeSpacing;

@interface SXComponentLayout : SXJSONObject <SXComponentLayout>

@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } columnRange;
@property (readonly, nonatomic) unsigned long long ignoreDocumentMargin;
@property (readonly, nonatomic) unsigned long long ignoreDocumentGutter;
@property (readonly, nonatomic) unsigned long long ignoreViewportPadding;
@property (readonly, nonatomic) id<SXEdgeSpacing> margin;
@property (readonly, nonatomic) struct _SXComponentContentInset { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; } contentInset;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } minimumHeight;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } suggestedHeight;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } maximumContentWidth;
@property (readonly, nonatomic) unsigned long long horizontalContentAlignment;
@property (readonly, nonatomic) id<SXEdgeSpacing> padding;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } minimumWidth;
@property (readonly, nonatomic) struct _SXConvertibleValue { double x0; unsigned long long x1; } maximumWidth;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;
+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;

- (unsigned long long)horizontalContentAlignmentWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)ignoreDocumentGutterWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)ignoreDocumentMarginWithValue:(id)a0 withType:(int)a1;
- (unsigned long long)ignoreViewportPaddingWithValue:(id)a0 withType:(int)a1;
- (id)paddingWithValue:(id)a0 withType:(int)a1;

@end
