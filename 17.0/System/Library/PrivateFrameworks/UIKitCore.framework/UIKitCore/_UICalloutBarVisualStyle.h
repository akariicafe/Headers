@class _UICalloutBarButtonMetrics, _UICalloutBarMetrics, UICalloutBar;

@interface _UICalloutBarVisualStyle : NSObject

@property (readonly, weak, nonatomic) UICalloutBar *calloutBar;
@property (readonly, nonatomic) _UICalloutBarMetrics *barMetrics;
@property (readonly, nonatomic) _UICalloutBarButtonMetrics *buttonMetrics;

- (void).cxx_destruct;
- (void)calloutBarDidDisappear:(id)a0;
- (void)calloutBarWillAppear:(id)a0;
- (id)initWithCalloutBar:(id)a0;
- (void)updateCalloutBar:(id)a0 withContentButtons:(id)a1;

@end
