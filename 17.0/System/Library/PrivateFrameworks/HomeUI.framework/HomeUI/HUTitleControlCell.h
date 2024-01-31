@class NSString, UIView;
@protocol HUControlView;

@interface HUTitleControlCell : HUControlPanelCell

@property (copy, nonatomic) NSString *controlTitle;
@property (retain, nonatomic) UIView<HUControlView> *controlView;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)allControlViews;

@end
