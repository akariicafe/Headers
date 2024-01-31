@interface CUIRenditionMetrics : NSObject <NSCopying> {
    struct CGSize { double width; double height; } _imageSize;
    struct CGSize { double width; double height; } _defaultImageSize;
    struct CGSize { double width; double height; } _edgeBottomLeftMargin;
    struct CGSize { double width; double height; } _edgeTopRightMargin;
    struct CGSize { double width; double height; } _contentBottomLeftMargin;
    struct CGSize { double width; double height; } _contentTopRightMargin;
    double _baseline;
    struct CGSize { double width; double height; } _auxiliary1BottomLeftMargin;
    struct CGSize { double width; double height; } _auxiliary1TopRightMargin;
    struct CGSize { double width; double height; } _auxiliary2BottomLeftMargin;
    struct CGSize { double width; double height; } _auxiliary2TopRightMargin;
    double _scale;
    struct crmFlags { unsigned char scalesVertically : 1; unsigned char scalesHorizontally : 1; unsigned short reserved : 14; } _crmFlags;
}

- (struct CGSize { double x0; double x1; })imageSize;
- (struct CGSize { double x0; double x1; })auxiliary2TopRightMargin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (struct CGSize { double x0; double x1; })auxiliary1BottomLeftMargin;
- (struct CGSize { double x0; double x1; })contentBottomLeftMargin;
- (BOOL)hasAlignmentEdgeMargins;
- (BOOL)scalesVertically;
- (double)scale;
- (struct CGSize { double x0; double x1; })contentTopRightMargin;
- (struct CGSize { double x0; double x1; })defaultImageSize;
- (BOOL)hasOpaqueContentBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })insetContentRectWithMetrics:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })auxiliary1TopRightMargin;
- (BOOL)scalesHorizontally;
- (struct CGSize { double x0; double x1; })edgeTopRightMargin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })insetRectWithMetrics:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })edgeRect;
- (double)baseline;
- (id)metricsByMirroringHorizontally;
- (struct CGSize { double x0; double x1; })edgeBottomLeftMargin;
- (struct CGSize { double x0; double x1; })auxiliary2BottomLeftMargin;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
