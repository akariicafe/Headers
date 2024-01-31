@class UIWindow;

@interface _TVWindowSizeAdaptor : NSObject {
    unsigned long long _allowedInterfaceOrientations;
}

@property (readonly, weak, nonatomic) UIWindow *window;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } adjustedWindowSize;

- (BOOL)update;
- (unsigned long long)_supportedOrientations;
- (id)initWithWindow:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldSwapDimensions;

@end
