@class UIWindow;

@interface _UIFocusSwipeTest : _UIFocusTest {
    unsigned long long _eventCount;
    const struct { double x0; long long x1; double x2; double x3; double x4; double x5; } *_events;
}

@property (weak, nonatomic) UIWindow *window;
@property (nonatomic) unsigned long long swipeAxis;

- (id)initWithIdentifier:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)prepareWithCompletionHandler:(id /* block */)a0;

@end
