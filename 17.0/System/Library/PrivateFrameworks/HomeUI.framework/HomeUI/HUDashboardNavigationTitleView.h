@protocol HUDashboardNavigationTitleViewDelegate;

@interface HUDashboardNavigationTitleView : _UINavigationBarTitleView

@property (weak, nonatomic) id<HUDashboardNavigationTitleViewDelegate> delegate;
@property (nonatomic) double previousLargeTitleHeight;

- (void).cxx_destruct;
- (void)contentDidChange;
- (id)initWithDelegate:(id)a0;

@end
