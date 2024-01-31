@class HFItem, HUHomeAccessoryTileView;
@protocol HFServiceLikeItem;

@interface HUSetupAccessoryOBWelcomeController : HUCenterFillOBWelcomeController

@property (readonly, nonatomic) HUHomeAccessoryTileView *homeAccessoryTileView;
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *item;

- (void).cxx_destruct;
- (double)_contentAspectRatio;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentView:(id)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 item:(id)a3;

@end
