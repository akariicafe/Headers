@class UIView;

@interface UIPDFViewManager : NSObject {
    UIView *_activeView;
}

+ (id)sharedViewManager;

- (void)makeViewActive:(id)a0;
- (void)viewReleased:(id)a0;

@end
