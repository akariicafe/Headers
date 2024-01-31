@class UIView;
@protocol NSCopying;

@interface PXGSingleViewContainerView : UIView <PXGReusableView>

@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)prepareForReuse;
- (void)becomeReusable;
- (void).cxx_destruct;

@end
