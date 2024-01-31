@class UIWindow, NSString, NSArray, UIView, _UIRotatingAlertController;

@interface _UITextItemActionSheet : NSObject <_UIRotatingAlertControllerDelegate> {
    NSString *_title;
    UIView *_view;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    NSArray *_ddActions;
    _UIRotatingAlertController *_alertController;
    UIWindow *_alertWindow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)present;
- (void).cxx_destruct;
- (id)_alertActionsWithController:(id)a0;
- (BOOL)_hasAlertActions;
- (id)hostViewForSheet:(id)a0;
- (id)initWithTitle:(id)a0 dataDetectorActions:(id)a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialPresentationRectInHostViewForSheet:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentationRectInHostViewForSheet:(id)a0;

@end
