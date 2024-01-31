@class GCController, UIAccessibilityGamepadEventSource;

@interface UIAccessibilityGameController : NSObject

@property (class, readonly, nonatomic) UIAccessibilityGameController *sharedGameController;

@property (retain, nonatomic) UIAccessibilityGamepadEventSource *eventSource;
@property (retain, nonatomic) GCController *controller;

- (id)vendorName;
- (id)init;
- (id)identifier;
- (void).cxx_destruct;
- (id)productCategory;
- (void)pressButton:(id)a0;

@end
