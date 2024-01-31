@interface CRTableCellGroupRegion : CRGroupRegion

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } rows;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } columns;

- (id)initWithBoundingQuad:(id)a0 layoutDirection:(unsigned long long)a1 subregions:(id)a2 rows:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 columns:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;

@end
