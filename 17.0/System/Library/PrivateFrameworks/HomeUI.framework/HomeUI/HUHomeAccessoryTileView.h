@class UIImageView, HUGridServiceCell, HFItem;
@protocol HFServiceLikeItem;

@interface HUHomeAccessoryTileView : UIView

@property (readonly, nonatomic) UIImageView *homeView;
@property (readonly, nonatomic) HUGridServiceCell *tileView;
@property (readonly, nonatomic) BOOL iconOnlyTile;
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *item;
@property (readonly, nonatomic) double aspectRatio;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 categoryType:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 item:(id)a1 iconOnlyTile:(BOOL)a2;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
