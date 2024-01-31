@class UINavigationController, NSString, CIDVRGBCaptureUIConfig, UIViewController;
@protocol CIDVRGBCaptureSelfieController;

@interface CIDVRGBCaptureDefaultUICoordinator : NSObject <CIDVRGBCaptureUICoordinator> {
    id /* block */ _completionHandler;
    UINavigationController *_navigationVC;
    UIViewController *_originalTopVC;
    id<CIDVRGBCaptureSelfieController> _controller;
    CIDVRGBCaptureUIConfig *_config;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleTimeout;
- (void)finishWithError:(id)a0;
- (void)_addNotificationObservers;
- (void)_cancelAfterAppMovedToBackground:(id)a0;
- (void)_cleanAfterError:(id)a0 completionHandler:(id /* block */)a1;
- (void)_presentSelfieVC;
- (void)_presentVC:(id)a0 animated:(BOOL)a1;
- (void)_removeNotificationObservers;
- (void)finishWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)startWithConfig:(id)a0 completionHandler:(id /* block */)a1;

@end
