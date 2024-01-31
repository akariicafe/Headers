@interface _UIONavigationBarTitleRenamerViewMetricsUpdateActionResponse : BSActionResponse

@property (readonly, nonatomic) unsigned long long sourceLayerRenderId;
@property (readonly, nonatomic) unsigned int sourceContextId;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) double horizontalTextInset;

- (id)initWithRenderID:(unsigned long long)a0 contextID:(unsigned int)a1 intrinsicContentSize:(struct CGSize { double x0; double x1; })a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 horizontalTextInset:(double)a4;

@end
