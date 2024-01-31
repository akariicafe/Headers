@class NSString, UIView, CPSDashboardEstimatesView, NSLayoutConstraint;
@protocol CPSSafeAreaDelegate;

@interface CPSDashboardEstimatesViewController : UIViewController <CPSNavigationDisplaying>

@property (retain, nonatomic) CPSDashboardEstimatesView *estimatesView;
@property (retain, nonatomic) NSLayoutConstraint *platterBottomConstraint;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (weak, nonatomic) id<CPSSafeAreaDelegate> safeAreaDelegate;
@property (readonly, nonatomic) UIView *platterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithShadowRadius:(double)a0 edgeInsets:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)navigator:(id)a0 didEndTrip:(BOOL)a1;
- (void)updateTripEstimates:(id)a0;

@end
