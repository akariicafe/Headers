@class UILabel;
@protocol NSCopying;

@interface PXStickersReviewDecorationView : UIView <PXGDecorationView> {
    UILabel *_label;
}

@property (nonatomic) unsigned long long decorationOptions;
@property (copy, nonatomic) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)prepareForReuse;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (float)_scoreForAssetReference:(id)a0;

@end
