@class MPUBorderDrawingCache, UIImageView, MPUBorderConfiguration;

@interface MPUBorderedImageStackItemView : MPUImageStackItemView {
    UIImageView *_borderImageView;
}

@property (copy, nonatomic) MPUBorderConfiguration *borderConfiguration;
@property (retain, nonatomic) MPUBorderDrawingCache *borderDrawingCache;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_borderDrawingCacheWasInvalidated:(id)a0;
- (void)_updateBorderImageView;

@end
