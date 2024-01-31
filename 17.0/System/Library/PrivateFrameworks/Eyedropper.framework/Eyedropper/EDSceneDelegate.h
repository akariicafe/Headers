@class NSString, UIWindow;

@interface EDSceneDelegate : UIResponder <EDWindowTrackingDelegate, UIWindowSceneDelegate> {
    double _touchesBeganTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void).cxx_destruct;
- (id)appDelegate;
- (id)lensView;
- (void)trackedTouchesBegan:(id)a0;
- (void)trackedTouchesCancelled:(id)a0;
- (void)trackedTouchesEnded:(id)a0;
- (void)trackedTouchesMoved:(id)a0;

@end
