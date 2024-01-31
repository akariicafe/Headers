@class _PXFeedbackTapToRadarViewController, NSArray, NSString;

@interface PXFeedbackTapToRadarViewController : UINavigationController <_PXFeedbackTapToRadarViewControllerDelegate>

@property (retain, nonatomic) _PXFeedbackTapToRadarViewController *feedbackViewController;
@property (copy, nonatomic) id /* block */ fileRadarHandler;
@property (nonatomic) BOOL requestScreenshotPermission;
@property (copy, nonatomic) NSArray *routes;
@property (copy, nonatomic) NSString *routesDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)availableRoutes;
- (void).cxx_destruct;
- (id)availableRoutesDescription;
- (void)didSelectFileRadarButtonWithScreenshotAllowed:(BOOL)a0 attachDiagnose:(BOOL)a1 selectedRoute:(id)a2;
- (BOOL)shouldRequestScreenshotPermission;

@end
