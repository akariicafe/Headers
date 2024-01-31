@class WFDispatchSourceTimer, WFMediaRoutePicker, WFMediaRouteDescriptor;

@interface WFMediaRouteFinder : NSObject <WFMediaRoutePickerObserver>

@property (readonly, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) WFMediaRouteDescriptor *routeDescriptor;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) WFDispatchSourceTimer *timer;
@property (readonly, weak, nonatomic) WFMediaRoutePicker *picker;

- (void)start;
- (void).cxx_destruct;
- (void)finishWithMatchingRoute:(id)a0 error:(id)a1;
- (id)initWithPicker:(id)a0 routeDescriptor:(id)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (void)routePickerDidUpdateAvailableRoutes:(id)a0;

@end
